let input = parseInt(prompt("Nhập số lượng số nguyên tố cần in: "));
let num = 2; 
let count = 0;
if(!isNaN(input)&& input>2){
    while (count < input) {
    
        let isPrime = true;
        if (num < 2) isPrime = false;
        for (let i = 2; i * i <= num; i++) {
            if (num % i === 0) {
                isPrime = false;
                break;
            }   
        }
        if (isPrime) {
            document.write(` ${num} `);
            count++;
        }
        
        num++;
    }
}else{
    alert("Vui lòng nhập lại!!!");
}

