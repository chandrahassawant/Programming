import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import { Routes, Route } from 'react-router-dom'
import { Home } from './Componet/Home'
import { About } from './Componet/About'

function App() {
  const [count, setCount] = useState(0)

  return (
    <>
     <Routes>
      <Route path="/" element={<Home/>}/>
      <Route path="/about" element= {<About/>}/>
     </Routes>
    </>
  )
}

export default App
