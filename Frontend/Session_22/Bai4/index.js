let input = (prompt("Vui lòng nhập dãy số muốn đảo ngược"));
var number = [];

if(!isNaN(input)){
   for(let i = 0; i<input.length; i++){
    number.push(input[i]);
   }
   document.write("Số lớn nhất trong dãy là : ");
   let max_number = number[0];
   
   for(let i = 1; i<number.length; i++){ 
    if(max_number<number[i]){
        max_number = number[i];
    }
   }
   document.write(max_number);
}else{
    alert("Dãy không hợp lệ");
}


