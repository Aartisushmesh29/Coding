import React from 'react'
import logo_light from "../assets/logo_white.png"
import logo_dark from "../assets/logo_black.png"
import search_white from "../assets/search_w.png"
import search_black from "../assets/search_b.png"
import toggle_light from "../assets/day.png"
import toggle_dark from "../assets/night.png"
function Navbar()  {

  // const toggle_mode = () => {
  //   theme == 'light'? setTheme('dark') : setTheme('light')
  // }
  return (
    <div className='w-full bg-slate-400 flex justify-evenly items-center pb-4 pt-4 pr-7 px-7  dark:bg-black mt-2'>
     <img src={logo_light} alt="" className='h-16 cursor-pointer bg-black p-4 rounded-md' />
      <ul className='flex text-center '>
        <li className='block mx-2.5 mt-2.5 text-lg cursor-pointer dark:text-white'>home</li>
        <li className='block mx-2.5 mt-2.5 text-lg cursor-pointer  dark:text-white'>home</li>
        <li className='block mx-2.5 mt-2.5 text-lg cursor-pointer  dark:text-white'>home</li>
        <li className='block mx-2.5 mt-2.5 text-lg cursor-pointer  dark:text-white'>home</li>
      </ul>
     <div className='search-box  bg-black flex items-center p-2 pr-5 border-black rounded-lg  dark:bg-white'>
        <input type="text" placeholder='search' className=' p-4 bg-transparent text-white  text-sm max-w-52 ' />
        <img src={ search_white} alt="" className='w-8 cursor-pointer   ' />
     </div>
     {/* <img src={} alt="" className='toggle-icon w-12 cursor-pointer mx-10' /> */}
    </div>
  )
}
export default Navbar
