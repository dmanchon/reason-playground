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
  let (counter, dispatch) = useCounter();
  let message =
    "You've clicked this " ++ string_of_int(counter.count) ++ " times(s)";

  <div>
    <button className=Styles.title onClick={_event => dispatch(Click)}>
      {ReasonReact.string("Press")}
    </button>
    <h1 className={Styles.actionButton(false)}>
      {ReasonReact.string(message)}
    </h1>
  </div>;
};
