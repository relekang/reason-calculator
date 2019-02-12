open Cmdliner;
open Calc;

let version = "0.0.0";

let print_result = result =>
  Pastel.(
    <Pastel>
      <Pastel color=BlackBright> "Result: " </Pastel>
      <Pastel bold=true> {string_of_int(result)} </Pastel>
    </Pastel>
  )
  |> print_endline;

let add = {
  let x =
    Arg.(
      value & pos(0, int, 0) & info([], ~docv="number", ~docs="First number")
    );
  let y =
    Arg.(
      value & pos(1, int, 0) & info([], ~docv="number", ~doc="Second number")
    );
  (
    Term.(const((x, y) => print_result(Calculator.add(x, y))) $ x $ y),
    Term.info("add"),
  );
};

let subtract = {
  let x =
    Arg.(
      value & pos(0, int, 0) & info([], ~docv="number", ~doc="First number")
    );
  let y =
    Arg.(
      value & pos(1, int, 0) & info([], ~docv="number", ~doc="Second number")
    );
  (
    Term.(const((x, y) => Calculator.subtract(x, y) |> print_result) $ x $ y),
    Term.info("subtract"),
  );
};

let default = (
  Term.(ret(const(_ => `Help((`Pager, None))) $ const())),
  Term.info("calc", ~version),
);

let _ = Term.eval_choice(default, [add, subtract]) |> Term.exit;
