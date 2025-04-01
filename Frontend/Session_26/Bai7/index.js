let arr = [2,5,10,12];
let arr_save = [];
if(checkInput(arr)){
    PowNumber(arr);
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
function PowNumber(array){
    for(let i = 0; i<array.length; i++){
        if(Math.pow(array[i], 2)%2==0) {
            arr_save.push(Math.pow(array[i], 2));
        }
    }
    document.write(arr_save.join(", "));
    
}