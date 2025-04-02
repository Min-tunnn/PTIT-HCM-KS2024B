let arr = [];
let  choice;
let flag = false;
do{
    choice = parseInt(prompt(`===========MENU===========
        1. Nhập danh sách số nguyên.
        2. Tính trung bình giá trị trong mảng.
        3. Tìm số chẵn lớn nhất.
        4. Tìm số lẻ nhỏ nhất.
        5. Thoát.
        `));
    switch(choice){
        case 1:{
            clearArr(arr);
            InputArr(arr);
            flag = true;
        }break;
        case 2:{
            if((flag) ? alert(`Giá trị trung bình: `+parseFloat(MathArg(arr))) : alert("Mảng rỗng!!!"));
        }break;
        case 3:{
            if((flag) ? alert(`Số chẵn lớn nhất trong mảng: `+FindMaxChan(arr)) : alert("Mảng rỗng!!!"));
            
        }break;
        case 4:{
            if((flag) ? alert(`Số lẻ bé nhất trong mảng: `+FindMinLe(arr)) : alert("Mảng rỗng!!!"));
            
        }break;
    }
}while(choice != 5);

function clearArr(array){
    array.length = 0;
}
function InputArr(arr){
    let n = parseInt(prompt("Nhập số lượng phần tử trong mảng: "));
    for(let i = 1; i<=n; i++){
        let input = parseInt(prompt(`Nhập giá trị phần tử thứ ${i}:`));
        arr.push(input);
    }
    alert("Nhập phần tử vào mảng thành công....");
}

function MathArg(array){
    let total = 0;
    for(let i = 0; i<array.length; i++){
        total+=array[i];
    }
    return  total/(array.length-1);
}
function FindMaxChan(array){
    let arr_save = [];
    for(let i=0; i<array.length; i++){
        if(array[i]%2==0){
            arr_save.push(array[i]);
        }
    }
    arr_save.sort((a, b)=>a-b);
    return arr_save[arr_save.length-1];
}

function FindMinLe(array){
    let arr_save = [];
    for(let i=0; i<array.length; i++){
        if(array[i]%2!==0){
            arr_save.push(array[i]);
        }
    }
    arr_save.sort((a, b)=>a-b);
    return arr_save[0];
}