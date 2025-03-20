let input = parseInt(prompt("Nhập tháng muốn kiểm tra"));
if(input>=1&&input<=3){
    document.write("Mùa xuân");
}else if(input>=4&&input<=6){
    document.write("Mùa hạ");
}else if(input>=7&&input<=9){
    document.write("Mùa thu");
}else if(input>=10&&input<=12){
    document.write("Mùa đông");
}else{
    alert("Cú pháp sai!!");
}