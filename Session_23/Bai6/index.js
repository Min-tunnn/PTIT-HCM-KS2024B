let arr = ["", false, 0, 5, 10, "Hello world!"];

document.write(`Phần tử trước khi kiểm tra là: [ `);
document.write(arr.join(", ") + " ]<br>");

let i = 0;
while (i < arr.length) {
    if (!arr[i]) {
        arr.splice(i, 1); 
    } else {
        i++;
    }
}

document.write(`Phần tử sau khi kiểm tra là: [ `);
document.write(arr.join(", ")+" ]");
