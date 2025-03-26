let number = [
    2,
    5,
    7,
    4,
    1,
    8,
    6,
];
let check = false;
let input = parseInt(prompt("Nhập số cần kiểm tra: "));
for(let i = 0; i<number.length; i++){
    if(number[i]==input){
        check = true;
        break;
    }
}
if(check){
    document.write("Bingo!!!");
}else{
    document.write("Chúc bạn may mắn lần sau :))");
}