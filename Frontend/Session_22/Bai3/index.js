let number = (prompt("Vui lòng nhập dãy số muốn đảo ngược"));
let number_rv = [];
if(!isNaN(number)){
    for (let i = 0; i < number.length; i++) {
        number_rv.push(number[i]);
    }
    number_rv.reverse();
    document.write(`${number} -> `)
    for (let i = 0; i < number_rv.length; i++) {
        document.write(number_rv[i]);
    }
}else{
    alert("Dãy không hợp lệ");
}


