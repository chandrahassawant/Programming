import { useState,useEffect } from 'react';

import './App.css'

function App() {

  let [counter,setcounter] = useState(15) // an value can be given
  
  
  //let counter =5;

  const addValue=()=>{

    if(counter<20)
    {
      setcounter(counter+1);
    }
   //counter= counter+1
   
  }

  const removeValue=()=>{

    if(counter>0)
    {
      setcounter(counter-1);
    }
    //counter= counter+1
   
   }
  
 

  return (
    <>
    <h1>Welcome to Add to cart</h1>
    <h3>Counter Value : {counter}</h3>
    <button onClick={addValue}>Add Value : {counter}</button>
    <br></br>
    <button onClick={removeValue}>Remove Value : {counter}</button>
    </>
  )
}

export default App
