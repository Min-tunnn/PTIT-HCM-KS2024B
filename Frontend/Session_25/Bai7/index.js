function capitalizeWords(str) {
    return str.toLowerCase().split(' ').map(word => word.charAt(0).toUpperCase() + word.slice(1)).join(' ');
}
let inputText = prompt("Nhập chuỗi cần chuyển đổi: ");
if (inputText !== null) {
    alert("Chuỗi sau khi chuyển đổi: " + capitalizeWords(inputText));
}
