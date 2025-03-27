let  arr = [];
let max = 0;
for(let i = 1; i<=10; i++){
    let input = parseInt(prompt(`Nhập giá trị thứ ${i}: `));
    arr.push(input);
}
if(arr.length!==0&&!isNaN(arr)){
    for(let i = 1; i<arr.length; i++){
        for(let j = 0; j<i; j++){
            if(arr[j]>arr[i]){
                max = j;
            }else{
                max = i;
            }
        }
    }
    document.write(`giá trị lớn nhất trong mảng là ${arr[max]} nằm ở ${max}`);
}else{
    alert("Mảng trống vui lòng nhập vào!!!");
}
