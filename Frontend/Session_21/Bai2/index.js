
let count_2= 0;
let count_1= 0;
for(let i=1; i<=5; i++){
    let input = parseInt(prompt(`Nhập giá trị ${i}: `));
    if(input%2==0)
    {
        count_2++;
    }else{
        count_1++;
    }
}
document.write(`Tổng các số chẵn: ${count_2} <br>`);
document.write(`Tổng các số lẻ: ${count_1} <br>`);

