import { useState } from 'react';

import './App.css';
import { Card } from './Componets/card';

function App() {
  const [count, setCount] = useState(0);

  return (
    <>
      {/* <h1 className='bg-yellow-400 text bg-black'>Hello</h1>

      <figure className="bg-slate-100 rounded-xl p-8 dark:bg-slate-800">
        
        <img class="w-30 h-30 rectangle-full mx-auto" src="https://rukminim2.flixcart.com/image/850/1000/xif0q/poster/g/h/y/medium-god-budhha-art-posters-gautam-buddha-hd-god-photo-original-imagp4btfeburhun.jpeg?q=90&crop=false" alt="" width="300" height="500"></img>
        <div className="pt-6 space-y-4">
          <blockquote>
            <p className="text-lg font-medium">
              “Tailwind CSS is the only framework that I've seen scale
              on large teams. It’s easy to customize, adapts to any design,
              and the build size is tiny.”
            </p>
          </blockquote>
          <figcaption className="font-medium">
            <div className="te">
              Sarah Dayan
            </div>
            <div>
              Staff Engineer, Algolia
            </div>
          </figcaption>
        </div>
      </figure> */}
      
     <Card></Card>

    </>
  );
}

export default App;
