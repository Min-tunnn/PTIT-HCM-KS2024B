let arr = ["Hello world", "Minh Tuấn", "Hi"];
CheckStr(arr);
function CheckStr(array){
    let array_save = [];
    for(let i = 0; i<array.length; i++){
        if(array[i].length>=5&&isNaN(array[i])){
            array_save.push(array[i]);
        }
    }
    if(array.length===0){
        document.write(`Phần tử trong mảng rỗng`);
    }else if(Array.isArray(array)==false){
        document.write(`Dữ liệu nhập vào không hợp lệ`);
    }else{
        document.write(`Các chuỗi lớn hơn 5 kí tự là: ${array_save.join(", ")}`);
    }   
}