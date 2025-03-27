let choice;
let arr = [];
let arr_save = [];
do{
    choice = parseInt(prompt(`
==================MENU======================
1. Nhập.
2. In ra.
3. Tính tổng các số chẵn.
4. In ra giá trị lớn nhất và nhỏ nhất trong mảng.
5. In ra các phần tử là số nguyên tố trong mảng và tính tổng.
6. Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử đó
7.Thêm một phần từ vào vị trí chỉ định
8. Thoát
============================================`));
    switch(choice){
        case 1:
            clear_arr();
            input();
        break;
        case 2:
            if(check_arr()){
                printf();
            }
        break;
        case 3:
            if(check_arr()){
                action3();
                clear_arr_save();
            }
        break;
        case 4:
            if(check_arr()){
                clear_arr_save();
                max_min();
            }
        break;
        case 5:
            if(check_arr()){
                clear_arr_save();
                isPrime();

            }
        break;
        case 6:
            if(check_arr()){
                clear_arr_save();
                let input = parseInt(prompt("Nhập phần tử cần tìm: "));
                alert(`Phần tử ${input} xuất hiện trong mảng `+count_find(input)+` lần`);
            }
        break;
        case 7:
            if(check_arr()){
                add_arr();
            }
        break;
        default:
            alert("Vui lòng nhập lại (1-8)!!!");
            break;
    }

}while(choice!=8);

/*Function*/ 
function  clear_arr(){
    arr.length=0;
}
function check_arr(){
    if(arr.length<=0){
        alert("mảng rỗng!!");
        return false;
    }else{
        return true;
    }
}
function clear_arr_save(){
    arr_save.length = 0;
}
function input(){
    let n = parseInt(prompt("Số lượng phần tử"));
    for(let i = 1; i<=n; i++){
        let iinput = parseInt(prompt(`Nhập giá trị cho phần tử ${i}`));
        arr.push(iinput);;
    }
    alert("Nhập thành công");
}
function  printf(){
    alert("Các phần tử trong mảng: " + arr.join(" "));
}
function action3(){
    let total = 0;
    for(var i = 0; i<arr.length; i++){
        if(arr[i]%2==0){
            arr_save.push(arr[i]);
        }
    }
    
    for(let i= 0 ; i<arr.length; i++){
        if(arr[i]%2==0){
            total+=arr[i];
        }
    }
    alert(`Các phần tử chẵn trong mảng: `+arr_save.join(" ")
    +`\nTổng các phần tử chẵn là: ${total}`);
    
}
function max_min(){
    for(var i = 0; i<arr.length; i++){
        arr_save.push(arr[i]);
    }
    for (let i = 0; i < arr_save.length - 1; i++) {
        for (let j = 0; j < arr_save.length - 1 - i; j++) {
            if (arr_save[j] > arr_save[j + 1]) {
                [arr_save[j], arr_save[j + 1]] = [arr_save[j + 1], arr_save[j]]; 
            }
        }
    }
    alert("Các phần tử trong mảng: " + arr_save.join(" "));
    alert(`Phần tử lớn nhất là: `+arr_save[arr_save.length-1]+`\nPhần tử nhỏ nhất là: `+arr_save[0]);
}
function isPrime()
{
    let total=0;
    for (let i = 0; i < arr.length; i++) {
        let isPrime = arr[i] > 1;
        for (let j = 2; j <= Math.sqrt(arr[i]); j++) {
            if (arr[i] % j === 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) arr_save.push(parseInt(arr[i]));
    }
    for(let i = 0; i<arr_save.length; i++){
        total+=arr_save[i];
    }
    alert(`Các phần tử nguyên tố trong mảng: `+arr_save.join(" ")+`\nTổng các số nguyên tố trong mảng: ${total}`);
}
function count_find(n){
    let count = 0;
    for(let i = 0; i<arr.length; i++){
        if(n==arr[i]){
            count++;
        }
    }
    return count;
}
function add_arr(){
    arr.length++;
    let position = parseInt(prompt("Nhập vị trí muốn thêm"));
    if (position >= 0 && position <= arr.length) {
        let value = parseInt(prompt("Nhập giá trị: "));
        for(var i = 0; i<arr.length; i++){
            if(i==position){
                arr.splice(i, 0, value);
            }
        }
    } else {
        alert("Vị trí không hợp lệ!");
    }
    
}

