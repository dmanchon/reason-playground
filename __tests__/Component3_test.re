open Jest;
open Expect;
open Component3;

describe("Events", () => {
  test("toggleEvent should toogle state.show", () => {
    let state = on_toggle(initialState);
    expect(state.show) |> toBe(false);
    let state = on_toggle(state);
    expect(state.show) |> toBe(true);
  });

  test("clickEvent should add 1 to state.count", () => {
    let state = on_click(initialState);
    expect(state.count) |> toBe(1);

    let state = on_click(state);
    expect(state.count) |> toBe(2);
  });
});
