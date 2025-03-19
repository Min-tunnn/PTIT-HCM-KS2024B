let a = parseFloat(prompt("Nhap do dai canh a: "));
let b = parseFloat(prompt("Nhap do dai canh b: "));
let c = parseFloat(prompt("Nhap do dai canh c: "));
if(a+b>c&&a+c>b&&c+b>a){
    if(Math.pow(a, 2)==Math.pow(b, 2)*Math.pow(c, 2)||Math.pow(b, 2)==Math.pow(a, 2)*Math.pow(c, 2)||Math.pow(c, 2)==Math.pow(b, 2)*Math.pow(a, 2)){
        document.write("Tam giác vuông");
    }else if(a==b && b==c ){
        document.write("Tam giác đều");
    }else if(a==b || b==c || c==a){
        document.write("Tam giác cân");
    }else{
        document.write("Tam giác thường");
    }

}else{
    alert("Nhập tỉ lệ sai vui lòng nhập lại!!!");
}