// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var Component1$ReactHooksTemplate = require("./Component1.bs.js");
var Component2$ReactHooksTemplate = require("./Component2.bs.js");
var Component3$ReactHooksTemplate = require("./Component3.bs.js");

function App(Props) {
  return React.createElement("div", undefined, React.createElement("h1", undefined, "Stateless"), React.createElement(Component1$ReactHooksTemplate.make, {
                  msg: "hello, click here!"
                }), React.createElement("h1", undefined, "State hook"), React.createElement(Component2$ReactHooksTemplate.make, {
                  greeting: "hello, click here!"
                }), React.createElement("h1", undefined, "Reducer hook"), React.createElement(Component3$ReactHooksTemplate.make, {
                  greeting: "hello, click here!"
                }), React.createElement("h1", undefined, "Context hook"));
}

var make = App;

exports.make = make;
/* react Not a pure module */
