let input = parseInt(prompt("Nhap vao so can kiem tra: "));

let isPerfectSquare = (num) => {
    let sqrt = Math.sqrt(num);
    return sqrt === Math.floor(sqrt);
};

document.write(`${input} ${isPerfectSquare(input) ? "là" : "không phải"} số chính phương`);
