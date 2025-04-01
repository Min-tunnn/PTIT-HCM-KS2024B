let arr = [2, 3, 4, 5, "huuuuuuu", 10, 15];
TimSo(arr);
function TimSo(array){
    let arr_save = [];
    let check = true;
    for(let i = 0; i<array.length; i++){
        if(array[i]>=10){
            arr_save.push(array[i]);
        }
    }
    for(let i = 0; i<arr_save.length; i++){
        if(isNaN(arr_save[i])){
            check =false;
            break;
        }
    }
    if(arr_save.length===0){
        document.write("Mảng không được tìm thấy trong mảng!!");
    }else if(check==false){
        document.write("Phần tử không hợp lệ!!!");
    }else{
        document.write(`Các phần từ lớn hơn hoặc bằng 10 là: ${arr_save.join(", ")}`)
    }
}