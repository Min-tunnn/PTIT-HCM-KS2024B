
let input1 = new Date(prompt("Nhap ngay thang 1:"));
let input2 = new Date(prompt("Nhap ngay thang 2:"));
let ressult= input1 - input2;
if (isNaN(ressult))
{
    document.write("Vui long nhap lai ngay thang nam chinh xac!!!") ;
}else{
    let result = Math.abs(input1 - input2) / (1000 * 60 * 60 * 24);
    document.write(`${result} ngày.`);
}

