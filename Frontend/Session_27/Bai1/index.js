let a = parseInt(prompt("Nhập giá trị a: "));
let b = parseInt(prompt("Nhập giá trị b: "));
function TinhTong(a, b){
    return a+b;
}
function TinhTru(a, b){
    return a-b;
}
function TinhNhan(a, b){
    return a*b;
}
function TinhChia(a, b){
    return a/b;
}
12
do{
    let choice = Number(prompt(`=============MENU=============
        1.Cộng hai số
        2.Trừ hai số
        3.Nhân hai số
        4.Chia hai số
        ==============================`));
    switch(choice){
        case 1:
        document.write(`Kết quá hai số sau cộng là: `+TinhTong(a, b));
            break;
        case 2:
        document.write(`Kết quá hai số sau trừ là: `+TinhTru(a, b));
            break;
        case 3:
        document.write(`Kết quá hai số sau nhân là: `+TinhNhan(a, b));
            break;
        case 4:
        document.write(`Kết quá hai số sau chia là: `+TinhChia(a, b));
            break;
    }
}while(choice<1||choice>4);



