let input = prompt("Nhập vào một số nguyên:");

if (isNaN(input) && input>0) {
    document.write("Số không hợp lệ");
} else {
    let isPalindrome = true;
    let length = input.length;

    for (let i = 0; i < Math.floor(length / 2); i++) {
        if (input[i]!==input[length-1-i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        document.write(input + "<br>Là số đối xứng");
    } else {
        document.write(input + "<br>Không phải số đối xứng");
    }
}
