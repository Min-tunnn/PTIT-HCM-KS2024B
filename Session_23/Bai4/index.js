let n = parseInt(prompt("Nhập số lượng phần tử muốn thêm vào"));
let arr = [];
let arr_save = [];

for(var i = 1; i<=n; i++){
    let input = prompt(`Nhập giá trị cho phần tử thứ ${i}`);
    arr.push(input);
}

for(var i = 0; i<n; i++){
    if(!isNaN(arr[i]) && !isNaN(parseInt(arr[i])))
    {
        arr_save.push(arr[i]);
    }
}
if(arr_save.length===0){
    document.write("Không có phần tử số!!!");
}else{
    document.write(`Phần tử trước sau khi nhập là : `);
    for(var i = 0; i<arr.length; i++){
        document.write(`${arr[i]}`+" ");
    }
    document.write(`<br>Các phần tử có giá trị kiểu number :`);
    for(var i = 0; i<arr_save.length; i++){
        document.write(`${arr_save[i]}`+" ");
    }
}
