
var input_name = prompt("Vui lonng nhap ten nguoi dung: ");
if(input_name=="ADMIN"){
    var input_pass= prompt("Nhap mat khau: ");
    if(input_pass=="TheMaster"){
        document.write("Welcome!")
    }else if(input_pass=="null"){
        document.write("Cancelled");
    }else{
        document.write("Wrong password.");
    }
}else if(input_name=="null"){
    document.write("Cancelled");
}else{
    document.write("I don't know you!!");
}