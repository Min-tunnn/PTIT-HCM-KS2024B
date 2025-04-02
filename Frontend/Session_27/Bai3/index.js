let r;
let a, b;
do{
    let choice = parseInt(prompt(`===========Menu===========
        1. Tính diện tích hình tròn.
        2. Tính chu vi hình tròn.
        3. Tính diện tích hình chữ nhật.
        4. Tính chu vi hình chữ nhật.
        5. Thoát.`));
        switch(choice){
            case 1:
                r = parseFloat(prompt("Vui lòng nhập giá trị r: "));
                alert(`Diện tích hình tròn: `+SCirle(r));
            break;
            case 2:
                r = parseFloat(prompt("Nhập giá trị r: "));
                alert(`Chu vi hình tròn: `+ChuviCirle(r));
            break;
            case 3:
                a = parseFloat(prompt("Nhập chiều dài hcn: "));
                b = parseFloat(prompt("Nhập chiều rộng hcn: "));
                alert(`Diện tích hình chữ nhật: `+Shcn(a, b));
            break;
            case 4:
                a = parseFloat(prompt("Nhập chiều dài hcn: "));
                b = parseFloat(prompt("Nhập chiều rộng hcn: "));
                alert(`Chu vi hình chữ nhật: `+CvHcn(a, b));
            break;
        }
}while(choice!==5);

function SCirle(n){
    return Math.pow(n, 2)*Math.PI;
}
function ChuviCirle(n){
    return 2*n*Math.PI;
}
function Shcn(n1, n2){
    return n1*n2;
}
function CvHcn(n1, n2){
    return (n1+n2)*2;
}