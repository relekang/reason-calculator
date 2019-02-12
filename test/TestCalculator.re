open TestFramework;

describe("Calculator.add", ({test}) =>
  Calc.(
    test("add(1 , 3) should equal 4", ({expect}) =>
      expect.int(Calculator.add(1, 3)).toBe(4)
    )
  )
);
