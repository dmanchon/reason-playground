type state = {
  count: int,
  show: bool,
};

/* Action declaration */
type action =
  | Click
  | Toggle;

let on_click = state => {...state, count: succ(state.count)};
let on_toggle = state => {...state, show: !state.show};

let handler = (state, action) =>
  switch (action) {
  | Click => on_click(state)
  | Toggle => on_toggle(state)
  };

let useCounter = () => React.useReducer(handler, {count: 0, show: true});

[@react.component]
let make = (~greeting="hola") => {
  let (state, dispatch) = useCounter();

  let message =
    "You've clicked this " ++ string_of_int(state.count) ++ " times(s)";

  <div>
    <button className=Styles.title onClick={_event => dispatch(Click)}>
      {ReasonReact.string("Press")}
    </button>
    <h1 className={Styles.actionButton(false)}>
      {ReasonReact.string(message)}
    </h1>
  </div>;
};
