// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var Styles$ReactHooksTemplate = require("./Styles.bs.js");

function useCounter(param) {
  return React.useReducer((function (state, action) {
                if (action) {
                  return /* record */[
                          /* count */state[/* count */0],
                          /* show */!state[/* show */1]
                        ];
                } else {
                  return /* record */[
                          /* count */state[/* count */0] + 1 | 0,
                          /* show */state[/* show */1]
                        ];
                }
              }), /* record */[
              /* count */0,
              /* show */true
            ]);
}

function Component3(Props) {
  Props.greeting;
  var match = useCounter(/* () */0);
  var dispatch = match[1];
  var message = "You've clicked this " + (String(match[0][/* count */0]) + " times(s)");
  return React.createElement("div", undefined, React.createElement("button", {
                  className: Styles$ReactHooksTemplate.title,
                  onClick: (function (_event) {
                      return Curry._1(dispatch, /* Click */0);
                    })
                }, "Press"), React.createElement("h1", {
                  className: Styles$ReactHooksTemplate.actionButton(false)
                }, message));
}

var make = Component3;

exports.useCounter = useCounter;
exports.make = make;
/* react Not a pure module */
