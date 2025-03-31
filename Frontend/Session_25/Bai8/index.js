function isStrongPassword(password) {
    return password.length >= 8 &&
           /[A-Z]/.test(password) &&
           /[a-z]/.test(password) &&
           /\d/.test(password);
}
let password = prompt("Nhập mật khẩu để kiểm tra độ mạnh: ");
if (password !== null) {
    alert(password + (isStrongPassword(password) ? " là mật khẩu mạnh." : " không phải là mật khẩu mạnh."));
}
