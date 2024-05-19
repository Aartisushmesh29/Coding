// const API_KEY = "e66f6f7c41481fd4c79591247914c52c";
// const form = document.querySelector("form");
// const search = document.querySelector("#search")
// const weather = document.querySelector("#weather")
// // const api = `https://api.openweathermap.org/data/2.5/weather?q={city name}&appid={API_KEY}`
// // const IMG_URL = `https: //openweathermap.org/img/wn/${data.weather[0].icon}@2x.png`

// const getWeather = async (city) => {
//     weather.innerHTML = `<h2>Loading...</h>`;
//     const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${API_KEY}&units=metric`;
//     const response = await fetch(url);
//     const data = await response.json()
//     return showWeather(data)
//     // console.log(data);
// }
// const showWeather =(data) => {
//     if(data.cod == "404"){
//         weather.innerHTML = `<h2> city not found</h2>`;
//         return;
//     }

//     weather.innerHTML = `
//     <div> 
//         <img src="https: //openweathermap.org/img/wn/${data.weather[0].icon}@2x.png" alt="">
//       </div>
//       <div>
//         <h2>${data.main.temp}°C</h2>
//         <h4>${data.weather[0].main}</h4>
//       </div>`
// }
// form.addEventListener( "submit" , function(event){
//     // console.log(search.value)
//     getWeather(search.value)
//     event.preventDefault();
// }
// )

const API_KEY = `e66f6f7c41481fd4c79591247914c52c`
const form = document.querySelector("form")
const search = document.querySelector("#search")
const weather = document.querySelector("#weather")
    // const API = `https://api.openweathermap.org/data/2.5/weather?
    // q=${city}&appid=${API_KEY}&units=metric`
    // const IMG_URL = `https: //openweathermap.org/img/wn/${data.weather[0].icon}@2x.png`
const getWeather = async(city) => {
    weather.innerHTML = `<h2> Loading... <h2>`
    const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${API_KEY}&units=metric`
    const response = await fetch(url);
    const data = await response.json()
    return showWeather(data)
}

const showWeather = (data) => {
    if (data.cod == "404") {
        weather.innerHTML = `<h2> City Not Found <h2>`
        return;
    }
    weather.innerHTML = `
        <div>
            <img src="https://openweathermap.org/img/wn/${data.weather[0].icon}@2x.png" alt="">
        </div>
        <div>
            <h2>${data.main.temp} ℃</h2>
            <h4> ${data.weather[0].main} </h4>
        </div>
    `
}

form.addEventListener(
    "submit",
    function(event) {
        getWeather(search.value)
        event.preventDefault();
    }
)