[@react.component]
let make = () =>
  <div>
    <h1> {ReasonReact.string("Stateless")} </h1>
    <Component1 msg="hello, click here!" />
    <h1> {ReasonReact.string("State hook")} </h1>
    <Component2 greeting="hello, click here!" />
    <h1> {ReasonReact.string("Reducer hook")} </h1>
    <Component3 greeting="hello, click here!" />
  </div>;
