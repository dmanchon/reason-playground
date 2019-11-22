[@react.component]
let make = (~greeting) => {
  let (counter, changeCounter) = React.useState(() => 0);

  <div>
    <button
      className=Styles.title
      onClick={_event => changeCounter(counter => succ(counter))}>
      {ReasonReact.string(greeting)}
    </button>
    {ReasonReact.string(string_of_int(counter))}
  </div>;
};
