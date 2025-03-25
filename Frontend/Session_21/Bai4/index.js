let a = parseInt(prompt("Nhap gia tri a:"));
let b = parseInt(prompt("Nhap gia tri b:"));
let c = parseInt(prompt("Nhap gia tri c:"));
if(isNaN(a)||isNaN(b)||isNaN(c))
{
    alert("Thông tin nhập vào không hợp lệ !!!");
}else if(a===0){ 
    if (b===0) {
        document.write(c===0 ? "Phương trình có vô số nghiệm":"Phương trình vô nghiệm");
    } else {
       document.write("Phương trình có một nghiệm: x = " +(-c/b));
    }
} else {
    let delta = b*b-4*a*c;
    if (delta>0) {
        let x1 = (-b + Math.sqrt(delta))/(2 * a);
        let x2 = (-b - Math.sqrt(delta))/(2 * a);
        document.write(`Phương trình có hai nghiệm phân biệt: x1 = ${x1}, x2 = ${x2}`);
    } else if (delta===0) {
        let x = -b / (2 * a);
        document.write(`Phương trình có nghiệm kép: x = ${x}`);
    } else {
        document.write("Phương trình vô nghiệm trong tập số thực.");
    }
}