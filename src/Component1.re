let handleClick = _event => Js.log("clicked!");

[@react.component]
let make = (~msg) =>
  <div onClick=handleClick> {ReasonReact.string(msg)} </div>;
