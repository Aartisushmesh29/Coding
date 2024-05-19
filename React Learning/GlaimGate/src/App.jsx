import './App.css'
import Hero from './components/hero';
import Navbar from './components/navbar';
import Items from './components/items';
import item_img1 from './images/item1.jpg'
import item_img2 from './images/item2.avif'
import item_img3 from './images/item3.avif'
function App() {

  return (
    <>
      <Navbar/>
      <Hero  imagePath = " "/>
      <div className='flex h-full bg-gray-200 justify-center items-center gap-10'>

      <Items name = "Items" imagePath = {item_img1}></Items>
      <Items name = "box" imagePath =  {item_img2}></Items>
      <Items name = "dabba" imagePath =  {item_img3}></Items> 
       </div>
    </>
  )
}

export default App
