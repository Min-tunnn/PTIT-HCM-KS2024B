let number = [1,2,2,3,4,5,5,6,7,8,7];
let input = parseInt(prompt("Nhập số cần tìm:"));
let count = 0;
for(let i = 0; i<number.length; i++){
    if(number[i]===input){
        count++;
    }
}
if(count!==0){
    document.write(`Giá trị ${input} xuất hiện trong mảng ${count} lần.`);
}else{
    document.write(`Không tìm thấy giá trị ${input} trong mảng`);
}
