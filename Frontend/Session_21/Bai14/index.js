let input = parseInt(prompt("Nhập số tiền cần rút: ")); 

if (isNaN(input)||input<1000) {
    document.write("Số tiền nhập không hợp lệ! Vui lòng nhập lại ");
} else {
    let money = 500000;
    document.write("Số tờ tiền nhận được:");
    
    while (money >= 1000) {
        let count = Math.floor(input / money);
        if (count > 0) {
            document.write(`${money} - ${count} tờ`);
            input %= money;
        }
        
        if (money == 500000) money = 200000;
        else if (money === 200000) money = 100000;
        else if (money === 100000) money = 50000;
        else if (money === 50000) money = 20000;
        else if (money === 20000) money = 10000;
        else if (money === 10000) money = 5000;
        else if (money === 5000) money = 2000;
        else if (money === 2000) money = 1000;
        else break;
    }
}
