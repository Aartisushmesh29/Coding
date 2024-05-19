const inputBox = document.querySelector(".input-box");
const searchBtn = document.getElementById("searchBtn");
const weatherImg = document.querySelector(".weather_img");
const temperature = document.querySelector(".temperature");
const description = document.querySelector(".description");
const humidity = document.getElementById("humidity");
const windSpeed = document.getElementById("wind-speed");

const locationNotFound = document.querySelector(".location-not-found");
const weatherBody = document.querySelector(".weather-body");

function getUserLocation() {
  if (navigator.geolocation) {
    navigator.geolocation.getCurrentPosition(
      (position) => {
        const latitude = position.coords.latitude;
        const longitude = position.coords.longitude;

        console.log(
          `User's location: Latitude ${latitude}, Longitude ${longitude}`
        );

        reverseGeocode(latitude, longitude);
      },
      (error) => {
        console.error("Error getting user location:", error.message);
      }
    );
  } else {
    console.error("Geolocation is not supported by this browser.");
  }
}

async function reverseGeocode(latitude, longitude) {
  const apiKey = "2d8173b8fa6441bcb917082068c7dfa4";
  const url = `https://api.opencagedata.com/geocode/v1/json?q=${latitude}+${longitude}&key=${apiKey}`;

  try {
    const response = await fetch(url);
    const data = await response.json();

    if (data.results && data.results.length > 0) {
      const city = extractCityName(data.results[0]);
      updateInputBox(city);
    } else {
      console.error("Unable to retrieve location name from coordinates.");
    }
  } catch (error) {
    console.error("Error during reverse geocoding:", error);
  }
}

function extractCityName(result) {
  const components = result.components;

  // Extract city name from components
  const city = components.city || components.town || components.village || "";

  return city;
}

function updateInputBox(locationName) {
  inputBox.value = locationName;
}

// Call the function to get the user's location
getUserLocation();

async function checkWeather(city) {
  const apiKey = "bef31e756c72456b95cda567c7d39a2f";
  const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}`;

  try {
    const response = await fetch(url);
    const weatherData = await response.json();

    if (weatherData.cod === "404") {
      locationNotFound.style.display = "flex";
      weatherBody.style.display = "none";
      console.log("error");
      return;
    }

    console.log("run");
    locationNotFound.style.display = "none";
    weatherBody.style.display = "flex";
    temperature.innerHTML = `${Math.round(weatherData.main.temp - 273.15)}°C`;
    description.innerHTML = `${weatherData.weather[0].description}`;
    humidity.innerHTML = `${weatherData.main.humidity}%`;
    windSpeed.innerHTML = `${weatherData.wind.speed}Km/H`;

    updateTheme(weatherData.weather[0].main);
    console.log(weatherData);
  } catch (error) {
    console.error("Error fetching weather data:", error);
  }
}

function updateTheme(weatherCondition) {
  const currentTime = new Date();
  const hours = currentTime.getHours();

  let themeClass = hours >= 6 && hours < 18 ? "day-theme" : "night-theme";

  const weatherIcons = {
    clouds: "cloud.png",
    clear: "clear.png",
    rain: "rain.png",
    mist: "mist.png",
    snow: "snow.png",
  };

  const weatherIcon = weatherIcons[weatherCondition.toLowerCase()];

  if (weatherIcon) {
    updateWeatherImage(weatherIcon);
  }

  document.body.className = themeClass;

  function updateWeatherImage(icon) {
    if (weatherImg) {
      weatherImg.src = `/assets/${icon}`;
    }
  }
}

searchBtn.addEventListener("click", () => {
  checkWeather(inputBox.value);
});
