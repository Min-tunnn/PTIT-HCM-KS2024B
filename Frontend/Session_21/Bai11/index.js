
for(let i = 1; i <= 10; i++) {
    let a = Math.floor(Math.random() * 256);
    let b = Math.floor(Math.random() * 256);
    let c = Math.floor(Math.random() * 256);
    console.log(`%cĐã đổi màu thành công...`, `color: rgb(${a}, ${b}, ${c})`);
}
