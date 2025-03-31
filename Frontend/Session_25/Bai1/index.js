function findMinElement(arr) {
    if (arr.length === 0) {
        alert("Mảng rỗng!!");
        return;
    }
    
    let arr_sort = [...arr];
    for (let i = 0; i<arr_sort.length-1; i++) {  
        for (let j = 0; j<arr_sort.length-i-1; j++) {  
            if (arr_sort[j]>arr_sort[j + 1]) {  
                let temp = arr_sort[j];  
                arr_sort[j] = arr_sort[j + 1];  
                arr_sort[j + 1] = temp;  
            }  
        }  
    }
    document.write(`Phần tử nhỏ nhất trong mảng: ${arr_sort.join(", ")}` + ` là:<br>` + arr_sort[0]);
}

let arr = [3, 5, 6, 7, 8, 2, 1, 3, 0, 2, 12, 2];
findMinElement(arr);
