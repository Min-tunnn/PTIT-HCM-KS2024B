function TimSoChan(arr) {
    let arr_save = [];
    let check = true;

    for (let i=0; i<arr.length; i++) {
        if (typeof arr[i]==="string"||typeof arr[i]==="char") {
            check = false;
            break;
        }
    }

    if (check) {
        for (let i=0; i<arr.length; i++){
            if (arr[i] % 2 === 0) {
                arr_save.push(arr[i]);
            }
        }
        if (arr_save.length===0) {
            alert("Mảng không chứa phần tử chẵn...");
        }else{
            document.write(`Các phần tử chẵn xuất hiện trong mảng là: ${arr_save.join(", ")}.`);
        }
    } else {
        alert("Mảng chứa phần tử không hợp lệ!!");
    }
}

let arr = [12, 2, 2, 4, 5, 23];
TimSoChan(arr);
