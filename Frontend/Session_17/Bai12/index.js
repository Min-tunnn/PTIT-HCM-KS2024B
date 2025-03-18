let number = parseInt(prompt("Nhập một số nguyên:"));
if (!isNaN(number)) {
    let binary = number.toString(2); 
    document.write(`Số ${number} trong hệ nhị phân là: ${binary}`);
} else {
    document.write("Vui lòng nhập một số hợp lệ!");
}
