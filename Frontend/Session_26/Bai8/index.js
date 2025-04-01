function isPrime(num){
    if (num < 2) return false;
    for (let i = 2; i*i<=num; i++){
        if (num % i === 0) return false;
    }
    return true;
}

function kiemtraInput(arr) {
    if (!Array.isArray(arr)||arr.length < 10||arr.length > 20||!arr.every(Number.isInteger)){
        document.write("Dữ liệu không hợp lệ");
        return;
    }
    
    const oddPrimes = arr.filter(num=>isPrime(num) && num%2!==0);
    
    if (oddPrimes.length === 0) {
        document.write("Mảng không có dữ liệu");
    } else {
        document.write(oddPrimes);
    }
}


kiemtraInput([10,2,3,5,7,9,10,1,2,2,12]);  
