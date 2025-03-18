function formatCurrencyVND(amount) {
    return amount.toLocaleString('vi-VN') + " VNĐ";
}

let userInput = prompt("Nhập số tiền: ");
let amount = parseFloat(userInput);

if (!isNaN(amount)) {
    document.write(formatCurrencyVND(amount));
} else {
    alert("Vui lòng nhập một số hợp lệ.");
}
