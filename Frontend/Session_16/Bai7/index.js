var math=parseFloat(prompt("Nhap diem toan"));
var physic=parseFloat(prompt("Nhap diem vat li"));
var eng=parseFloat(prompt("Nhap diem tieng anh"));

document.write("Toan: " + math + "<br>");
document.write("Vat ly: " + physic + "<br>");
document.write("Tieng anh: " + eng + "<br>");
alert("Điểm trung bình 3 môn là: "+(math+physic+eng)/ 3 + " Points");