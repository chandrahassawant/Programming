import React, { useState, useCallback, useEffect } from "react";

import "./App.css";

function App() {
  const [length, setLength] = useState(6);
  const [includeNumbers, setIncludeNumbers] = useState(false);
  const [includeCharacters, setIncludeCharacters] = useState(false);
  const [password, setPassword] = useState("");

  const passwordGenerator = useCallback(() => {
    let pass = "";
    let str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    if (includeNumbers) {
      str += "0123456789";
    }
    if (includeCharacters) {
      str += "!@#$%^&*";
    }

    for (let i = 0; i < length; i++) {
      let char = Math.floor(Math.random() * str.length);
      pass += str.charAt(char);
    }

    setPassword(pass);
  }, [length, includeNumbers, includeCharacters]);

  const resetField = useCallback(() => {
    setPassword(""), setLength(6);
  }, []);

  const copyPass = () => {
    if (password.length > 5) {
      navigator.clipboard
        .writeText(password)
        .then(() => alert("Password copied to clipboard"))
        .catch(() => alert("Failed to copy password"));
    }
  };
  
  useEffect(() => {
    passwordGenerator();
  }, [length, includeNumbers, includeCharacters]);

  return (
    <>
      <div className="max-w-full text-orange-500">Test</div>
      <button onClick={passwordGenerator}>Generate Password</button>

      <div>
        <input type="text" value={password} placeholder="password" readOnly />
      </div>

      <div>
        <input
          type="range"
          min={6}
          max={20}
          value={length}
          className="cursor-pointer"
          onChange={(e) => {
            setLength(e.target.value);
          }}
        />

        <label>Length : {length}</label>
      </div>

      <div>
        <input
          type="checkbox"
          checked={includeNumbers}
          id="numberInput"
          onChange={() => {
            setIncludeNumbers((prev) => !prev);
          }}
        />
        <label htmlFor="numberInput">Numbers</label>
      </div>

      <div>
        <input
          type="checkbox"
          checked={includeCharacters}
          id="characterInput"
          onChange={() => {
            setIncludeCharacters((prev) => !prev);
          }}
        />
        <label htmlFor="characterInput">Characters</label>
      </div>

      <button onClick={copyPass}>Copy Password/</button>

      <button onClick={resetField}>Reset Password</button>
    </>
  );
}

export default App;
