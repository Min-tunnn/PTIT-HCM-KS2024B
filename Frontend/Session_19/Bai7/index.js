let a = parseInt(prompt("Nhập giá trị a"));
let b = parseInt(prompt("Nhập giá trị b"));
let c = parseInt(prompt("Nhập giá trị c"));
let find_max = Math.max(a, b, c);
if(a>b&&a>c){
    document.write(`Số lớn nhất trong 3 số là: ${a}`);
}else if(b>a&&b>c){
    document.write(`Số lớn nhất trong 3 số là: ${b}`);
}else{
    document.write(`Số lớn nhất trong 3 số là: ${c}`);
}