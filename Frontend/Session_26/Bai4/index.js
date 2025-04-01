let arr = [1,2,3,4,5,6,7,8,9,10];
let arr_save = [];
flag = false;
for(let i = 0; i<arr.length; i++){
    if(typeof arr[i]==="string"){
        flag = true;
    }
}
IsPrime(arr);
//check input arr
if(flag == true){
    document.write("Dữ liệu không hợp lệ, vui lòng kiểm tra lại !!");
}else if(arr.length===0){
    document.write("Mảng không chữa phần tử nào!!");
}else{
    document.write(`${arr_save.join(", ")}`);
}


function IsPrime(array){
    for(let i = 0; i<array.length; i++){
            if (arr[i] < 2) continue;
            let isprime = true;
            for (let j = 2; j <= Math.sqrt(arr[i]); j++) { 
                if (arr[i] % j == 0) {
                    isprime = false;
                }
            }
            if(isprime){
                arr_save.push(arr[i]);
            }   
    }
}