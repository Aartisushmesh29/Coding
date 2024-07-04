import { useEffect, useState } from 'react'
import Navbar from "./component/Navbar"
// import Card from './component/card'
import Theme from "./component/Theme.jsx";
import Hero from "./component/Hero.jsx";
import Add from "./component/Add.jsx";
import image1 from "./assets/gaming1.jpg"
import image2 from "./assets/gaming2.jpg"
import image3 from "./assets/gaming3.jpg"
import First from "./component/first.jsx"
import Footer from './component/footer.jsx';
// import New from "./component/New.jsx"


  // let [count, setCount] = useState(10)
  // const [theme , setTheme] = useState('light');

  // useEffect(() =>{
  //   if(theme === 'dark'){
  //     document.documentElement.classList.add("dark");
  //   } else {
  //     document.documentElement.classList.remove("dark");
  //   }
  // },[theme]);

  // const handleThemeSwitch = () => {
  //   setTheme(theme === "dark" ? "light" : "dark");
  // };
  // const addVlaue = () => {
  //   setCount(count+1);
   
  // }
  // const removeVlaue=() =>{
  //   setCount(count - 1);
  //   if(count <= 0){
  //     setCount(count = 0) ;
  //   }
  // }
  function App() {
    const [isMenuOpen, setIsMenuOpen] = useState(false);
  
    const toggleMenu = () => {
      setIsMenuOpen(!isMenuOpen);
    };
  return (
    
     <>
     

     <Theme/>
     <Navbar/>
     <First/>
     <Add/>
     <Hero image ={image2}/>
     <Footer/>
    
     {/* <New/> */}

     
    {/* <h1 className='text-white m-4'>aarti</h1>
    {/* <h3>counter value:</h3> */}
    {/* <button onClick={addVlaue}>Increment: {count}</button>
    <button onClick={removeVlaue}>decrement: {count}</button> */}
    {/* <Card username = "Aarti"/>
    <Card username = "sushmesh" /> */} 
    </>

    
  )
}

export default App
  