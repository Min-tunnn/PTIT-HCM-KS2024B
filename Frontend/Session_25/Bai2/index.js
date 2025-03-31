function TongSoChan(){
    let a = parseInt(prompt("Nhập số nguyên a: "));
    let b = parseInt(prompt("Nhập số nguyên b: "));
    
    if (isNaN(a)||isNaN(b)) {
        alert("Phần tử nhập không hợp lệ!!");
    } else {
        document.write(`Tổng hai phần tử ${a} và ${b} là : ${a + b}`);
    }
}

TongSoChan();
