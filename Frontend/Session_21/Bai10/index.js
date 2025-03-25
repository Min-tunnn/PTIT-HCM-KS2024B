let n = parseInt(prompt("Nhập số lượng số nguyên tố cần in: "));
let count = 0;
let first_num = 2;

console.log(`${n} số nguyên tố đầu tiên là:`);
while (count < n) {
    let isPrime = true;
    for (let i = 2; i <= Math.sqrt(first_num); i++) {
        if (first_num % i === 0) {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime) {
        console.log(num);
        count++;
    }
    
    first_num++;
}
