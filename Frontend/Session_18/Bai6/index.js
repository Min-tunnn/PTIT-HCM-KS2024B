let input_year = parseInt(prompt("Nhap nam bat ky: "));
if(!isNaN(input_year))
{
    if(input_year%4==0){
        document.write("Là năm nhuận");
    }else{
        document.write("Khong phải là năm nhuận");
    }
}else{
    alert("Vui long nhap lai: ");
}
