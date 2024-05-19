import React from 'react'


function Box({userName}) {
  return(
    <div class="flex justify-center items-center h-screen bg-gray-100">
       <h2 className='bg-yellow-300 m-5'>{userName}</h2>
    </div>
   )
  }
export default Box