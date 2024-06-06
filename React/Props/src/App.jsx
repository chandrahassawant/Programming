import { useState } from 'react'

import './App.css'
import { Header } from './Header/Header'

function App() {
  const [count, setCount] = useState(0)
  
  return (
    <>
      <Header name = "chandrahas"/>
      <Header name = "Tejas"/>
    </>
  )
}

export default App 
