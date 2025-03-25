let input = parseInt(prompt("Nhập 1 só nguyên bất kì: "));
let check_prime = input >1;
for(let i = 2; i<=Math.sqrt(input); i++){
    if(input % i ==0 ){
        check_prime = false;
        break;
    }
}
if(check_prime){
    document.write(`${input} là số nguyên tố`);
}else{
    document.write(`${input} không phải là số nguyên tố`);
}