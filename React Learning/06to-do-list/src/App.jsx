import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
   const [title, settitle] = useState("")
   const [desc, setdesc] = useState("")
   const [mainTask, setmainTask] = useState([])
   const submitHandler =(e) =>{
    e.preventDefault();
    setmainTask([...mainTask,{title,desc}]);
    settitle("")
    setdesc("")
  }
  const DeleteHandler = (i)=>{
        let copyTask =[...mainTask]
        copyTask.splice(i,1)
        setmainTask(copyTask)
  }
  let renderTask = <h2>No task available</h2>
  if(mainTask.length >0){
    renderTask = mainTask.map((t,i) =>{
        return (
        <li key={i} className='felx items-centre justify- betweeen mb-8'>
        <div className='flex justify-between m-5  w-2/3'>
               <h5 className='text-2xl font-semibold'>{t.title}</h5>
               <h6 className='text-lg font-medium'>{t.desc}</h6>
               </div>
               <button 
               onClick={()=>{DeleteHandler(i)}}
               className='bg-red-400 text-white px-4 py-2 rounded font-bold'>Delete</button>
        </li>
        )
    })
  }
  return (
    <>
      <h1 className='bg-black text-white text-5xl p-5 font-bold text-center'>Aarti's To Do's - List</h1>
      <form onSubmit={submitHandler}>
        <input type="text" className='text-2xl border-zinc-800 border-4 m-5 px-4 py-2' 
        placeholder='Enter task here'
        value = {title}
        onChange={(e) => {settitle(e.target.value)
        }}/>
        <input type="text" className='text-2xl border-zinc-800 border-4 m-5 px-4 py-2' 
        placeholder='Enter description here'
        value = {desc}
        onChange={(e) => {setdesc(e.target.value)
        }}/>
        <button className='bg-black font-bold rounded text-white px-3 py-3 text-2xl m-5'>Add Task</button>
      </form>
      <hr />
      <div className='p-8 bg-slate-200'>
        <ul>
          {renderTask}
        </ul>
      </div>
    </>
  )
}
export default App
