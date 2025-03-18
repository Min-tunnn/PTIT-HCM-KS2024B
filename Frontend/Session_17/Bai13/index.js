let Month_profit = parseFloat(4.3/12);
let input_money = parseInt(prompt("Nhap so tien gui: "));
let input_month = parseInt(prompt("Nhap vao so thang gui: "));
let result = (input_money/100*(input_month*Month_profit));
document.write(result + "Vnđ");