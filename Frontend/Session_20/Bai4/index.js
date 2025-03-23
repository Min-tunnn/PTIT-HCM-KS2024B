let str = "Nguyễn Trần Minh Tuấn";
let input = prompt("Nhập vào chuỗi cần kiểm tra");

if(str.indexOf(input)!=-1){
    document.write(`${input} được tìm thấy trong chuỗi "${str}"`);
}else{
    document.write(`${input} không tìm thấy trong chuỗi "${str}"!!!`);
}