let first_money = parseFloat(prompt("Nhập số tiền ban đầu: "));
let last_money = parseFloat(prompt("Nhập lãi suất (%): ")) / 100;
let months = parseInt(prompt("Nhập số tháng gửi: "));
let totalAmount = first_money * Math.pow(1 + last_money, months);
let interestEarned = totalAmount - first_money;

console.log(`Tiền lãi: ${interestEarned.toFixed(3)}`);
console.log(`Tiền nhận được: ${totalAmount.toFixed(3)}`);
