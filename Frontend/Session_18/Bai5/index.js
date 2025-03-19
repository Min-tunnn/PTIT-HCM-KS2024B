let input_infor = parseFloat(prompt("Nhap so nam kinh nghiem: "));
if(!isNaN(input_infor)&&input_infor>0&&input_infor<100){
    if(input_infor<1){
        document.write("Mới vào nghề");
    }else if(input_infor>=1&&input_infor<=3){
        document.write("Nhân viên có kinh nghiệm");
    }else if(input_infor>=4&&input_infor<=6){
        document.write("Chuyen vien");
    }else{
        document.write(" Quản lý");
    }
}else{
    alert("Vui long nhap lai!!!");
}