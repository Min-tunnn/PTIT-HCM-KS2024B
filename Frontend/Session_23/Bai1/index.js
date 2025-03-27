let arr = [];
let arr_max10 = [];
for(let i = 1; i<=10; i++){
    arr.push(Math.floor(Math.random()*20));
    arr.push(Math.floor(Math.random()*20));
    arr.push(Math.floor(Math.random()*20));
    arr.push(Math.floor(Math.random()*20));
    arr.push(Math.floor(Math.random()*20));
    arr.push(Math.floor(Math.random()*20));
    arr.push(Math.floor(Math.random()*20));
    arr.push(Math.floor(Math.random()*20));
    arr.push(Math.floor(Math.random()*20));
    arr.push(Math.floor(Math.random()*20));
}
for(let i = 0; i<10; i++){
    document.write(arr[i]+" ");
}
document.write("<br>Các phần tử lớn hơn 10 là : ");
for(let i = 0; i<10; i++){
    if(arr[i]>10)
    {
        arr_max10.push(arr[i]);
    }
}
document.write(`<br>${arr_max10.join(" ")}`);