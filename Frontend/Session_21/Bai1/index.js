let total = 0;
for(let i=1; i<=5; i++){
    let input = parseInt(prompt(`Nhập giá trị ${i}: `));
    if(input%2!==0)
    {
        total += input;
    }
}
document.write(`Tổng các số lẻ: ${total}`);

