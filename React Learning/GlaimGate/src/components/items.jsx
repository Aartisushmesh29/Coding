import React from 'react'

/**
* @author
* @function 
**/

function Items({name , imagePath}) {
  return(
    <div className=' flex justify-center items-center h-screen'>
    <div className='w-40 border-2 text-black'>
        {name}

        <img src={ imagePath} alt="" />
        <div>
          $124
        </div>
    </div>
        
    </div>
   )
  }
export default Items