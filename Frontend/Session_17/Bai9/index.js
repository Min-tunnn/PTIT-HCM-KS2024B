function solveQuadraticEquation(a, b, c) {
    if (a === 0) {
        console.log("Đây không phải phương trình bậc 2.");
        return;
    }
    
    let delta = b * b - 4 * a * c;
    if (delta < 0) {
        console.log("Phương trình vô nghiệm.");
    } else if (delta === 0) {
        let x = -b / (2 * a);
        console.log(`Phương trình có nghiệm kép: x = ${x}`);
    } else {
        let x1 = (-b + Math.sqrt(delta)) / (2 * a);
        let x2 = (-b - Math.sqrt(delta)) / (2 * a);
        console.log(`Phương trình có 2 nghiệm: x1 = ${x1}, x2 = ${x2}`);
    }
}

// Nhập hệ số từ người dùng
let a = parseFloat(prompt("Nhập a: "));
let b = parseFloat(prompt("Nhập b: "));
let c = parseFloat(prompt("Nhập c: "));

solveQuadraticEquation(a, b, c);
