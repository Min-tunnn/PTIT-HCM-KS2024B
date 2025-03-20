let check_number = prompt("Nhập chuỗi để kiểm tra: ");
regexp1 = /^[A-Z]/;
regexp2 = /^[a-z]/;
   if (regexp1.test(check_number)||regexp2.test(check_number))
    {
      document.write(`${check_number} xuất hiện chữ cái!`);
    } 
    else
    {
     document.write(`${check_number} không xuất hiện chữ cái!`);
    }