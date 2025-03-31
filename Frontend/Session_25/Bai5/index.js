let arr = [2,3,2,1,2,-2,5.5];
if(soDuong(arr)===0){
    document.write("Không có số nguyên dương trong mảng");
}else{
    document.write(`Số nguyên dương được tìm thấy trong mảng là: ${soDuong(arr)}`);
}
function soDuong (arr){
    let count = 0;
    for(let i = 0; i<arr.length; i++){
        if(arr[i]>=0&&arr[i]%1===0){
            count++;
        }
    }
    return count;
}
