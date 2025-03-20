let input_number = parseFloat(prompt("Nhập số kiểm tra: "));
if(input_number%3==0 && input_number%5==0)
{
    document.write(`${input_number} là số chia hết cho 3 và 5`);
}else{
    document.write(`${input_number} là số không chia hết cho 3 và 5`);
}