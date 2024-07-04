import React from 'react'
import image1 from "../assets/gaming1.jpg";
import image3 from "../assets/gaming3.jpg";

const Hero = ({ depth = 0 ,image }) => {
  if(depth > 1){
    return null; //stop recursion after a cetain depth
  }
  const nextimage = depth === 0 ? {image3} : {image1}

  return (
    <div className='flex justify-center items-center bg-slate-700'>
      <div className='flex:1'>

        <img className='w-1/2 p-4' src= {image} alt="hero" />
      </div>
        <div className='text-red-500 w-1/2 text-center text-red-600 text-6xl font-semibold font-'> "PC gaming: where dreams become reality." 
        
          <Hero depth={depth+1} image = {nextimage}/>
        </div>
    </div>
  );
};

export default Hero;


