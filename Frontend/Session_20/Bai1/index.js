let n = parseInt(prompt("Nhập giá trị mong muốn"));
let total = 0;
if(!isNaN(n)&&n>0){
    for(let i=0; i<=n; i++){
        total += i ;
    }
    document.write(total);
}else{
    alert("Dữ liệu nhập vào không hợp lệ");
}


