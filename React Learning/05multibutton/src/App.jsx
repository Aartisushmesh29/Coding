import { useState } from 'react'
import './App.css'

function App() {
  const [count, setCount] = useState(0)
  function add(){
    setCount(count+1);
  }
  function subtract(){
    setCount(count-1);
  }
  function Multiply(){
    setCount(count*2);
  }
  function divide(){
    setCount(count/2);
  }
  return (
    <>
      <h1>Multiple buttons</h1>
      <h3>Clicked value : {count}</h3>
      <button onClick={add}>Add</button>
      <button onClick={subtract}>subtract</button>
      <button onClick={Multiply}>Multiply</button>
      <button onClick={divide}>divide</button>
    </>
  )
}

export default App
