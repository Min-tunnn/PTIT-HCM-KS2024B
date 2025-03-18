
let r = parseFloat(prompt("Nhập bán kính hình cầu:"));

if (isNaN(r) || r <= 0) {
    document.write("Vui lòng nhập một giá trị bán kính hợp lệ!");
} else {
    let pi = Math.PI;

    let theTich = (4 / 3) * pi * Math.pow(r, 3);
    let dienTichBeMat = 4 * pi * Math.pow(r, 2);
    let chuViLonNhat = 2 * pi * r;

    document.write(`Thể tích hình cầu: ${theTich.toFixed(2)} <br>`);
    document.write(`Diện tích bề mặt hình cầu: ${dienTichBeMat.toFixed(2)} <br>`);
    document.write(`Chu vi lớn nhất của hình cầu: ${chuViLonNhat.toFixed(2)} <br>`);
}
