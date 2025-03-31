let users = [];

function registerEmail() {
    let email = prompt("Nhập email đăng ký: ");
    let emailRegex = /^[^\s@]+@[^\s@]+\.(com|vn)$/;
    
    if (!emailRegex.test(email)) {
        alert("Email không hợp lệ! Vui lòng nhập lại.");
        return;
    }
    
    if (users.includes(email)) {
        alert("Tài khoản đã tồn tại!");
    } else {
        users.push(email);
        alert("Đăng ký thành công!");
    }
}
let password = prompt("Nhập mật khẩu để kiểm tra độ mạnh: ");
if (password !== null) {
    alert(password + (isStrongPassword(password) ? " là mật khẩu mạnh." : " không phải là mật khẩu mạnh."));
}

registerEmail();