function numberToWords(num) {
    if (num < 0 || num > 999 || isNaN(num)) {
        return "Vui lòng nhập một số từ 0 đến 999";
    }
    
    function getOnes(n) {
        switch (n) {
            case 0: return "không";
            case 1: return "một";
            case 2: return "hai";
            case 3: return "ba";
            case 4: return "bốn";
            case 5: return "năm";
            case 6: return "sáu";
            case 7: return "bảy";
            case 8: return "tám";
            case 9: return "chín";
            default: return "";
        }
    }
    
    function getTeens(n) {
        switch (n) {
            case 10: return "mười";
            case 11: return "mười một";
            case 12: return "mười hai";
            case 13: return "mười ba";
            case 14: return "mười bốn";
            case 15: return "mười lăm";
            case 16: return "mười sáu";
            case 17: return "mười bảy";
            case 18: return "mười tám";
            case 19: return "mười chín";
            default: return "";
        }
    }
    
    function getTens(n) {
        switch (n) {
            case 1: return "mười";
            case 2: return "hai mươi";
            case 3: return "ba mươi";
            case 4: return "bốn mươi";
            case 5: return "năm mươi";
            case 6: return "sáu mươi";
            case 7: return "bảy mươi";
            case 8: return "tám mươi";
            case 9: return "chín mươi";
            default: return "";
        }
    }
    
    let words = "";
    
    if (num === 0) {
        return getOnes(0);
    }
    
    if (num >= 100) {
        words += getOnes(Math.floor(num / 100)) + " trăm";
        num %= 100;
        if (num > 0) {
            words += " ";
        }
    }
    
    if (num >= 20) {
        words += getTens(Math.floor(num / 10));
        num %= 10;
        if (num > 0) {
            words += " ";
        }
    } else if (num >= 10) {
        words += getTeens(num);
        num = 0;
    }
    
    if (num > 0) {
        words += getOnes(num);
    }
    
    return words;
}

const input = prompt("Nhập số từ 0 đến 999:");
const number = parseInt(input);
alert(numberToWords(number));
