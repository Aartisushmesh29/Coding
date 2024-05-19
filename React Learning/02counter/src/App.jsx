import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  let [counter, setCounter] = useState(15)
  //  let counter = 15;
   const addValue = ()=>{
    console.log("clicked",Math.random())
    
      counter = counter+1;
      setCounter(counter); 
      if(counter >= 20 ){
        setCounter(counter= 20)
      }
    
    // setCounter===>it takes the value -->jo update honi hai uss variable(here counter)ki
   }

   const removeValue= () =>{
    setCounter(counter-1);
    if(counter <= 0 ) setCounter(counter = 0);
   }
  return (
    <>
      <h1>Chai or react </h1>
      <h2>counter value : {counter}</h2>
      <button onClick={addValue}>Add value {counter} </button>
      <br />
      <button onClick={removeValue}>remove value {counter}</button>
    </>
  ) 
}

export default App
