let math = parseFloat(prompt("Nhap diem Toan"));
let eng = parseFloat(prompt("Nhap diem Anh"));
let van = parseFloat(prompt("Nhap diem Van"));
let result = (math + eng + van)/3;
if(isNaN(result)){
    alert("Vui long nhap lai diem!!!");
}else{
    if(math>=0||math<=10||eng>=0||eng<=10||van>=0||van<=10)
        {
            
            if(result>=8){
                document.write("Gioi");
            }else if(result>=6,5||result<8){
                document.write("Kha");
            }else if(result>=5||result<6,5){
                document.write("Trung binh");
            }else{
                document.write("Yeu");
            }
        }else{
            alert("Vui long nhap lai diem!!!");
        }
}
