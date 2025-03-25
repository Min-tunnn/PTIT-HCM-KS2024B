let input = parseInt(prompt("Nhập 1 só nguyên bất kì: "));
document.write(`Các ước số của ${input} la: `);
for(let i = 1; i <= input; i++){
    if(input % i == 0){
        document.write(` ${i} `);
    }
}