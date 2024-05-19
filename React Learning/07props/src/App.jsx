import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Box from './components/box'

function App() {
  const [count, setCount] = useState(0)

  return (
    <div>

     <div>

      <h1 className='flex justify-center items center'>My boxes</h1>
     </div>
    <div className='flex gap-10'>
      <Box userName ='Aarti'>

      </Box>
      <Box userName ='Aartiiiiiiii'>

      </Box>
      <Box userName ='Aarti sushmesh'>

      </Box>
    </div>
    </div>
  )
}

export default App
