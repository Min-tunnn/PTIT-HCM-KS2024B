
    
let input = parseInt(prompt("Nhập số lượng cần liệt kê"));

if(!isNaN(input)&&input>0){
    document.write(`Dãy fibonacii 1-${input} là:`);
    let a = 0, b = 1;
    if (input > 1) document.write(` ${b} `); 
    
    for (let i = 1; i < input; i++) {
        let next = a + b;
        document.write(` ${next} `);
        a = b;
        b = next;
    }
}else{
    alert("Sai cú pháp");
}

