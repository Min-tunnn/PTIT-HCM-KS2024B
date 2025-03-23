let input = parseInt(prompt("Nhập giá trị cần kiểm tra: "));

function isprime(n){
    if(n<2) return false;
    for (let i = 2; i <= Math.sqrt(n); i++) {
        if (n % i === 0) return false;
    }
    return true;
}
let check = isprime(input) ? "là số nguyên tố" : "không phải là số nguyên tố";
document.write(`Giá trị ${input} ${check}`);
