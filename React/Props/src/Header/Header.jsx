import React from "react";

export function Header(props) {
  console.log(props);

  return (
    <>
      <h1>Hello : {props.name} </h1>
     
    </>
  );
}
