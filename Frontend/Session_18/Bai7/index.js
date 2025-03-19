let a=parseInt(prompt("Nhap vao so a: "));
let b=parseInt(prompt("Nhap vao so b: "));

if(!isNaN(a)&& !isNaN(b)){
    let value = prompt("Nhap phep tinh (+, -, /, *): ")
    if(value=="+"){
        document.write(a+b);
    }else if(value=="-"){
        document.write(a-b);
    }else if(value=="/"){
        document.write(a/b);
    }else if(value=="*"){
        document.write(a*b);
    }else{
        alert("Vui long chon lai phep tinh!!!");
    }
}else{
    alert("Vui long nhap lai number a va b");
}