const A: number = 3;

const func = (parameter: string[]) => {
  const B = parameter.map((item) => {
    if (item.includes("A")) return item;
  });

  return B;
};

const result = func([A.toString(), "321", "ABCD"]);

console.log(result);

export default A;
