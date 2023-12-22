"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const A = 3;
const func = (parameter) => {
    const B = parameter.map((item) => {
        if (item.includes("A"))
            return item;
    });
    return B;
};
const result = func([A.toString(), "321", "ABCD"]);
console.log(result);
exports.default = A;
