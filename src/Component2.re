type state = {
  count: int,
  show: bool,
};

/* Action declaration */
type action =
  | Click
  | Toggle;

let useCounter = () =>
  React.useReducer(
    (state, action) =>
      switch (action) {
      | Click => {...state, count: succ(state.count)}
      | Toggle => {...state, show: !state.show}
      },
    {count: 0, show: true},
  );

[@react.component]
let make = (~greeting) => {
  let (state, dispatch) = useCounter();

  let message =
    "You've clicked this " ++ string_of_int(state.count) ++ " times(s)";

  <div>
    <button className=Styles.title onClick={_event => dispatch(Click)}>
      {ReasonReact.string(message)}
    </button>
    <button onClick={_event => dispatch(Toggle)}>
      {ReasonReact.string("Toggle greeting")}
    </button>
    {state.show ? ReasonReact.string(greeting) : ReasonReact.null}
  </div>;
};
