let array = [];
let count_chan = 0;
let count_le = 0;
for(let i = 1; i<=5; i++){
    let input = parseInt(prompt(`Nhập giá trị ${i} trong phần tử: `));
    array.push(input);
}
for(let i = 0; i<5; i++){
    if(array[i]%2==0){
        count_chan+=array[i];
    }else if(array[i]%2!==0){
        count_le+=array[i];
    }
}
document.write(`Tổng các só chẵn: ${count_chan} <br>`);
document.write(`Tổng các só lẻ: ${count_le}`);

