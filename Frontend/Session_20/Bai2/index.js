
let n = parseInt(prompt("Nhập giá trị mong muốn"));

if(!isNaN(n)&&n>0){
    document.write(`Các số chia hết cho 5 là: `);
    
    for(let i=1; i<=n; i++){
        if(i%5!=0){
            document.write(`${i}, `);
        }
        
    }   
}else{
    alert("Dữ liệu nhập vào không hợp lệ");
}


