let a = parseInt(prompt("Nhập giá trị a: "));
let b = parseInt(prompt("Nhập giá trị b: "));
let result = 1;

for (let i = 1; i <= b; i++) {
    result *= a;
}

document.write(result);
