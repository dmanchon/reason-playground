/* Open the Css module, so we can access the style properties below without prefixing them with Css. */
open Css;

let card =
  style([
    display(flexBox),
    flexDirection(column),
    alignItems(stretch),
    backgroundColor(white),
    boxShadow(Shadow.box(~y=px(8), ~blur=px(5), rgba(100, 100, 0, 0.3))),
    /* You can add non-standard and other unsafe style declarations using the `unsafe` function, with strings as the two arguments. */
    unsafe("-webkit-overflow-scrolling", "touch"),
  ]);

let title = style([fontSize(rem(1.0)), color(red)]);

let actionButton = disabled =>
  style([
    background(disabled ? darkgray : white),
    color(gray),
    borderBottomStyle(solid),
    borderRadius(px(9)),
  ]);
