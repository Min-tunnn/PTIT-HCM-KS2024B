let hour = parseInt(prompt("Nhập vào giờ: "));
let minute = parseInt(prompt("Nhập vào phút: "));
let second = parseInt(prompt("Nhập vào giây: "));

if(!(hour >= 0 && hour <= 23 && minute >= 0 && minute <= 59 && second >= 0 && second <= 59)){
    alert("Dữ liệu nhập vào không hợp lệ!!!");
}else{
    if(hour>=13 && hour<=23){
        document.write((hour-12)+":"+minute+":"+second+" PM");
    }else if(hour>= 0 && hour <= 12){
        document.write(hour+":"+minute+":"+second+" AM");
    }
}



