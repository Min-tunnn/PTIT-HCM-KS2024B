let arr = ["2025-04-29", "2025-02-02"];
let arr_save = [];
arr_save = arr.map(date => {const [year, month, day] = date.split("-");  return `${day}/${month}/${year}`;});
document.write("Mảng trước khi thay đổi: "+arr.join(", "));
document.write("<br>"+"Mảng sau khi thay đổi: "+arr_save.join(", "));