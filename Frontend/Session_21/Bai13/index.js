let a = parseInt(prompt("Nhập chiều dài của HCN"));
let b = parseInt(prompt("Nhập chiều rộng của HCN"));

for (let i=0; i<b; i++) {
    for (let j=0; j<a; j++) {
        if (i==0||i==b-1||j==0||j==a-1) {
            document.write("*"); 
        } else {
            document.write("&nbsp;&nbsp;"); 
        }
    }
    document.write("<br>");
}
