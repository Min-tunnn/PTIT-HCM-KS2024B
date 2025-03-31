let input = parseInt(prompt("Nhạp số nguyên để ktra: "));
if (isNaN(input)) {
    alert("Vui lòng nhập một số hợp lệ!");
} else {
    alert(input + (checkIsPrime(input) ? " là số nguyên tố." : " không phải là số nguyên tố."));
}


function checkIsPrime(n){
    if (n < 2) return false;
    for (let i = 2; i <= Math.sqrt(n); i++) {
        if (n % i === 0) return false;
    }
    return true;
}