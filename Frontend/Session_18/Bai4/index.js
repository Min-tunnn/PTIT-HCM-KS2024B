let input_number = parseInt(prompt("Nhập số từ 0 đến 9: "));


    switch (input_number) {
        case 0:
            document.write("Bạn đã nhập: Không");
            break;
        case 1:
            document.write("Bạn đã nhập: Một");
            break;
        case 2:
            document.write("Bạn đã nhập: Hai");
            break;
        case 3:
            document.write("Bạn đã nhập: Ba");
            break;
        case 4:
            document.write("Bạn đã nhập: Bốn");
            break;
        case 5:
            document.write("Bạn đã nhập: Năm");
            break;
        case 6:
            document.write("Bạn đã nhập: Sáu");
            break;
        case 7:
            document.write("Bạn đã nhập: Bảy");
            break;
        case 8:
            document.write("Bạn đã nhập: Tám");
            break;
        case 9:
            document.write("Bạn đã nhập: Chín");
            break;
        default:
            alert("Lỗi không xác định!");
    }