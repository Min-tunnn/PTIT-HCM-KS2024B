let arr = [10, 5, 2, 12, 15, 3, 22, 7];
let arr_save = [];

if(checkInput(arr)==true){
    for(let i = 0; i<arr.length; i++){
        arr_save.push(arr[i]);
    }
    arr_save.sort((a,b)=>a-b);
    findNumber(arr, arr_save);
}

function checkInput(array){
    let flag = false;
    for(let i = 0; i<arr.length; i++){
        if(typeof arr[i] == "string"){  
            flag = true;
            break;
        }
    }
    if(flag == true){
        document.write("Dữ liệu không hợp lệ, vui lòng kiểm tra lại !!");
        return false;
    }else if(arr.length===0){
        document.write("Mảng không chữa phần tử nào!!");
        return false;
    }else{
        return true;
    }
}
function findNumber(array1, array2){
    for(let i = 0; i<array1.length; i++){
        if(array1[i]==array2[array2.length-1]){
            document.write(`Max: ${array1[i]}<br>Position: ${i}`);
        }
    }

}