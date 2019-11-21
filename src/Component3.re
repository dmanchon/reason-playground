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
  let message = "You've clicked this " ++ string_of_int(1) ++ " times(s)";

  <h1 className={Styles.actionButton(false)}>
    {ReasonReact.string(greeting)}
  </h1>;
};
