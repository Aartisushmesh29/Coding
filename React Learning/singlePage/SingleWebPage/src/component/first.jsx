import React from 'react'
import image_f from "../assets/gaming1.jpg";

const first = () => {

  return (
    
       <div className='flex justify-evenly items-center bg-slate-700 h-screen'>
       <div className='w-1/2'>

        <img className=' p-4' src= {image_f} alt="hero" /> 
      </div>
      <div className=' w-1/2 text-center text-red-600 text-6xl font-semibold '> "PC gaming: where dreams become reality."</div>
      </div>
    
  )
}

export default first
