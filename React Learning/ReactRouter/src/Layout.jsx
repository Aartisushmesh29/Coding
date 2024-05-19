import React from 'react'
import Footer from './components/Footer/Footer'
import Header from './components/Header/Header.jsx'
import { Outlet } from 'react-router-dom'
/*
* @author
* @function 
**/

function Layout() {
  return(
    <>
    <Header/>
     <Outlet/>
    <Footer/>
    </>
   )
  }
  export default Layout 
