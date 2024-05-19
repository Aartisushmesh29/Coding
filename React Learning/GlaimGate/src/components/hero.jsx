import React from 'react'
import hero_img from '../images/3.jpeg'
/**
* @author
* @function 
**/

function Hero() {
  return(
    <div className='font-teko flex h-screen bg-white '>
      <div className=' flex w-1/2 text-black text-2xl justify-center items-center'>
        <div className='text-center w-1/2 text-5xl font-bold '>
           Tackle your fitness resolutions 
           or keep up with your current routine
           </div>

      </div>
      <div className='flex w-1/2 justify-center items-center'>

        <img className='w-3/5' src ={hero_img} alt="" />
      </div>
    </div>
   )
  }
  export default Hero
