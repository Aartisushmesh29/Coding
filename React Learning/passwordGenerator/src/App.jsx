import { useCallback, useEffect, useRef, useState } from 'react'
// import './App.css'

function App() {
  const [length, setLength] = useState(8)
  const [numAllowed, setNumAllowed] = useState(false)
  const [charAllowed, setCharAllowed] = useState(false)
  const [password , setPassword] = useState("")
  //  UseRef hook
  const passwordRef = useRef(null)
  const passwordGenerator = useCallback(() => {
  let pass ="";
  let str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
  if(numAllowed) str += "0123456789"
  if(charAllowed) str +="!@#$%^&*-_+=[]{}~`"

  for(let i = 1 ; i<=length; i++){
    let char = Math.floor(Math.random()*str.length +1)
    pass += str.charAt(char)
  }
  setPassword(pass) 
  },[length,numAllowed,charAllowed,setPassword])

  const copyPasswordToClipboard = useCallback(()=>{
    passwordRef.current?.select()
    passwordRef.current?.setSelectionRange(0,101)
   window.navigator.clipboard.writeText(password)
  },[password])

  useEffect(()=>{
    passwordGenerator()
  },[length,numAllowed,charAllowed,passwordGenerator])
  return ( 
    <> 
      <h1 className='text-4xl text-center text-white' >
        Password Generator</h1>
        <div className="flex shadow rounded-lg overflow-hidden mb-4">
        <input
            type="text"
            value={password}
            className="outline-none w-full py-1 px-3"
            placeholder="Password"
            readOnly
            ref={passwordRef} 
            />
            <button onClick={copyPasswordToClipboard}
             className='outline-none bg-blue-700 text-white px-3 py-0.5 shrink-0'
              >copy</button>
            </div>
            <div className='flex text-sm gap-x-2'>
            <div className='flex items-center gap-x-1'>
           <input 
              type="range"
               min={6}
               max={100}
               value={length}
               className='cursor-pointer'
               onChange={(e) => {setLength(e.target.value)}}
          />
          <label className='text-white' >Length: {length}</label>
      </div>
      <div className="flex items-center gap-x-1">
      <input
          type="checkbox"
          defaultChecked={numAllowed}
          id="numberInput"
          onChange={()=>{
            setNumAllowed((prev) => !prev);
          }}
          />
         <label className='text-white' htmlFor="numberInput">Numbers</label>
         </div>
         <div className="flex items-center gap-x-1">
          <input
              type="checkbox"
              defaultChecked={charAllowed}
              id="characterInput"
              onChange={() => {
                  setCharAllowed((prev) => !prev )
              }}
          />
          <label className='text-white' htmlFor="characterInput">Characters</label>

          </div>
      </div>
    </>
  )
}

export default App
