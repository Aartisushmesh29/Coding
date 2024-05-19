
import React from 'react'

/**
* @author
* @function 
**/

function  Navbar() {
  return(
    <div>
       <div  className=' flex justify-between items-center h-20 w-full text-black bg-white px-4 py-1'> 
       <div className='h-8 w-10 '>logo
        </div> 
      
  
        <div className='flex items-center '>

        <button className='ml-4 p-1 hover:text-xl'>Home</button>
        <button className='ml-4 p-1 hover:text-xl'>Men</button>
        <button className='ml-4 p-1 hover:text-xl'>Women</button>
        <button className='ml-4 p-1 hover:text-xl'>Kids</button>
        </div>
        <div className=''>

        <button className='border-2 rounded hover:text-xl'>login</button>
        </div>
        
     </div>
     </div>
    
   )
  }
  export default Navbar
