let a = parseInt(promt("Nhập giá trị a"));
let b = parseInt(promt("Nhập giá trị b"));
let c = parseInt(promt("Nhập giá trị c"));
if (a ==0) {
    if (b==0) {
        if (c==0) {
            document.write("Phương trình có vô số nghiệm.");
        } else {
            document.write("Phương trình vô nghiệm.");
        }
    } else {
        let x = -c/b;
        document.write("Phương trình có một nghiệm: x = " + x);
    }
} else {
    let delta = b * b - 4 * a * c;
    if (delta > 0) {
        let x1 = (-b + Math.sqrt(delta)) / (2 * a);
        let x2 = (-b - Math.sqrt(delta)) / (2 * a);
        document.write("Phương trình có hai nghiệm phân biệt: <br>");
        document.write(`x1 = ${x1} <br>`);
        document.write(`x2 = ${x2}`);
    } else if (delta === 0) {
        let x = -b / (2 * a);
        document.write("Phương trình có nghiệm kép: x = " + x);
    } else {
        document.write("Phương trình vô nghiệm.");
    }
}