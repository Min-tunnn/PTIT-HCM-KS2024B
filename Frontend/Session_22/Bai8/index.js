let arr = [];
for (let i = 1; i <= 10; i++) {
    arr.push(parseInt(prompt(`Nhập giá trị ${i}: `)));
}

document.write(`Các phần tử sau khi nhập: <br>`);
for (let i = 0; i < 10; i++) {
    document.write(arr[i]+" ");
}
let max = 0;
let result;
document.write(`<br>Phần tử xuất hiện nhiều nhất: `);
for (let i = 0; i < arr.length; i++) {
    let count = 0;
    for (let j = 0; j < arr.length; j++) {
        if (arr[i] === arr[j]) {
            ++count;
        }
    }
    if (count > max) {
        max = count;
        result = arr[i];
    }
}
document.write (`${result} (xuất hiện ${max} lần)`);
