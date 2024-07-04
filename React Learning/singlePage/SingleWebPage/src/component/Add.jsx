import React, { useState } from 'react'

const Add = () => {
    const [count , setCount] = useState(0)
    const addvalue = () => {
        setCount(count +1);
    }
  return (
    <div className= 'flex:col h-screen'>
        <div className=' bg-green-600 align-middle text-center h-48'>

        <button onClick={addvalue}>IncrementCount : {count}</button>
        </div>
        <div className=' bg-yellow-600 h-48'> second div</div>
    </div>
  )
}

export default Add
