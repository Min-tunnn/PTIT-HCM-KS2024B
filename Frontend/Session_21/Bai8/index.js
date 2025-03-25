document.write("Các số Armstrong có 3 chữ số là:");
for (let num = 100; num <= 999; num++) {
    let hundreds = Math.floor(num / 100);
    let tens = Math.floor((num % 100) / 10);
    let ones = num % 10;
    
    let sumOfCubes = Math.pow(hundreds, 3) + Math.pow(tens, 3) + Math.pow(ones, 3);
    
    if (sumOfCubes === num) {
       document.write(num+" ");
    }
}
