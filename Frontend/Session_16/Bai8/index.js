var a=parseInt(prompt("Nhao so a: "));
var b=parseInt(prompt("Nhao so b: "));
var c=parseInt(prompt("Nhao so c: "));
if (a > b && a > c) {
    alert("Số lớn nhất là a: " + a);
} else if (b > a && b > c) {
    alert("Số lớn nhất là b: " + b);
} else {
    alert("Số lớn nhất là c: " + c);
}