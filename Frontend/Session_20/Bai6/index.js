let input = parseInt(prompt("Nhap 1 so  nguyen bat ki: "));
if(!isNaN(input)&&input>0){
    alert("Nhap sai cu phap vui long nhap lai!!!");
}else{
    let isPrime = true;
    if (n < 2) {
        isPrime = false;
    } else {
        for (let i = 2; i <= Math.sqrt(n); i++) {
            if (n % i === 0) {
                isPrime = false;
                break;
            }
        }
    }
    document.write(isPrime);
}

