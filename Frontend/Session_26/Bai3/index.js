function filterValidEmails(emails) {
    if (!Array.isArray(emails)) {
        return "Dữ liệu không hợp lệ";
    }
    let validEmails = emails.filter(email => typeof email === "string" && email.includes("@") && !email.includes(" ") && email.includes("gmail.com"));
    return validEmails.length > 0 ? validEmails : "Dữ liệu không hợp lệ";
}

let arr = ["Hihi@gmail.com"]; 

if (arr.length === 0) {
    document.write("Mảng không chứa phần tử!!!");
} else {
    let result = filterValidEmails(arr);
    document.write(Array.isArray(result) ? result.join(", ") : result);
}
