console.log("1");
// const a = parseInt(document.getElementById("a").value);
// const b = parseInt(document.getElementById("b").value);
// const c = parseInt(document.getElementById("c").value);

const resultBtn = document.getElementById("result");
const deltaResult = document.getElementById("deltaResult");
const x1Result = document.getElementById("x1Result");
const x2Result = document.getElementById("x2Result");

let delta = 0;
let x1 = 0;
let x2 = 0;
let pierwiastek = 0;

resultBtn.addEventListener("click", () => {
    const a = parseInt(document.getElementById("a").value);
    const b = parseInt(document.getElementById("b").value);
    const c = parseInt(document.getElementById("c").value);

    delta = b * b - 4 * a * c;
    pierwiastek = Math.sqrt(delta)
    x1 = -b / 2 * a;
    x2 = b / 2 * a;

    deltaResult.innerHTML = delta;
    x1Result.innerHTML = x1;
    x2Result.innerHTML = x2;

    console.log(a, b, c);
});
