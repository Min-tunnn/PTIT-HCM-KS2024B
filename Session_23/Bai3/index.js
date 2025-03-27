let n = parseInt(prompt("nhập số lượng phần tử: "));
let arr = [];
let count = 0;
if(n<=0){
    alert("Số lượng phần tử không hợp lệ");
}else{
    for(let i = 1; i<=n; i++){
        let input = parseFloat(prompt(`Nhập giá trị cho phần tử ${i}: `))
        arr.push(input);
    }
    if(!isNaN(arr)&&arr===0){
        document.write("Các phần tử sau khi nhập là: ");
        for(let i = 0; i<n; i++){
            document.write(arr[i]+" ");
        }
        
        for(let i = 0; i<n; i++){
            if(arr[i]%1 !== 0){
                i++;
            }else{
                if(arr[i]<0){
                    ++count;
                }
            }
        }
        document.write(`<br>`+count);
    }else{
        alert("Mảng không có phần tử");
    }
    
}

