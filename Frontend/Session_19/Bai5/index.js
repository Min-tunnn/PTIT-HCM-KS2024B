let input = prompt("Nhập chuỗi muốn kiểm tra: ");
let find_space = input.search(" ");
if(find_space!=-1){
    document.write("Chuoi chua dau cach");
}else{
    document.write("Chuoi khong chua dau cach");
}