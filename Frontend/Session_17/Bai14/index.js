
let r = parseFloat(prompt("Nhập bán kính hình trụ:"));
let h = parseFloat(prompt("Nhập chiều cao hình trụ:"));

if (isNaN(r) || isNaN(h) || r <= 0 || h <= 0) {
    document.write("Vui lòng nhập giá trị hợp lệ cho bán kính và chiều cao!");
} else {
    let pi = Math.PI;

    let chuViDay = 2 * pi * r;
    let dienTichXungQuanh = 2 * pi * r * h;
    let dienTichToanPhan = dienTichXungQuanh + 2 * pi * r * r;
    let theTich = pi * r * r * h;

    document.write(`Chu vi đáy: ${chuViDay.toFixed(2)} <br>`);
    document.write(`Diện tích xung quanh: ${dienTichXungQuanh.toFixed(2)} <br>`);
    document.write(`Diện tích toàn phần: ${dienTichToanPhan.toFixed(2)} <br>`);
    document.write(`Thể tích hình trụ: ${theTich.toFixed(2)} <br>`);
}
