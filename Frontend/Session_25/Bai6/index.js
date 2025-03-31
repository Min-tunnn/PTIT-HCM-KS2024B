function isPalindrome(str) {
    let reversedStr = str.split('').reverse().join('');
    return str === reversedStr;
}
let inputString = prompt("Nhập chuỗi cần kiểm tra đối xứng: ");
if (inputString !== null) {
    alert(inputString + (isPalindrome(inputString) ? " là chuỗi đối xứng." : " không phải là chuỗi đối xứng."));
}
