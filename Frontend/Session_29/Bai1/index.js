let contacts = [];
let id = 1;
let input;
let choice;
do{
     choice = parseInt(prompt(`====================MENU====================
        1. Thêm đối tượng Contact vào danh sách liên hệ.
        2. Hiển thị danh sách danh bạ.
        3. Tìm kiếm thông tin Contact theo số điện thoại.
        4. Cập nhật thông tin Contact(name, email, phone) theo id.
        5. Xóa một đối tượng Contact  khỏi danh sách danh bạ theo id.
        6. Thoát.
        ============================================
        Vui lòng chọn: `));
        switch (choice){
            case 1:
                let name = prompt("Nhập tên: ");
                let email = prompt("Nhập email: ");
                let phone = prompt("Nhập sđt: ");
                addContact(name, email, phone);
            break;
            case 2: 
                showContact();
            break;
            case 3:
                input = prompt("Nhập số điện thoại cần tìm: ");
                findPhone(input);
            break;
            case 4:
                input = prompt("Nhập id cần chỉnh sửa: ");
                editContact(input)
            break;
            case 5:
                input = parseInt(prompt("Nhập id cần xóa: "));
                removeContact(input);
            break;
            case 6:
                alert("Thoát chương trình...");
                close();

            break;
            default:
                alert("Lựa chọn không  đúng yêu cầu nhập lại!!!");
            break;
        }

}while(choice!=6);
function addContact(name, email, phone){
    const contact = {
        ID : id++,
        NAME : name,
        EMAIL : email,
        PHONE : phone
    }
    contacts.push(contact);
    alert("Thêm thành công: ");
}
function showContact() {
    let result = "";
    for (let i = 0; i < contacts.length; i++) {
      result += 
        "ID: " + contacts[i].ID + 
        ", NAME: " + contacts[i].NAME + 
        ", EMAIL: " + contacts[i].EMAIL + 
        ", PHONE: " + contacts[i].PHONE + "\n";
    }
    alert(result);
  }
  


function findPhone(phone){
    let result ="";
    let flag = false;
    for(let i = 0 ; i<contacts.length ; i++){
        if(contacts[i].PHONE == phone){
            result += 
        "ID: " + contacts[i].ID + 
        ", NAME: " + contacts[i].NAME + 
        ", EMAIL: " + contacts[i].EMAIL + 
        ", PHONE: " + contacts[i].PHONE + "\n";
        flag = true;
        }
    }  
    if(!flag){
        alert("Không tìm thấy người dùng!!");
    }else{
        alert(`Các đối tượng có số điện  thoại ${phone} là: \n${result}`);
    }
}
function editContact(id){
    let result = "";
    for(let i = 0; i<contacts.length; i++){
        let flag = false;
        if(contacts[i].ID==id){
             result += 
            "ID: "+contacts[i].ID +
            "NAME: "+contacts[i].NAME +
            "EMAIL: "+contacts[i].EMAIL +
            "PHONE: "+contacts[i].PHONE + "\n";
            let name = prompt(`Vui lòng nhập tên: `);
            contacts[i].NAME = name;
            let email = prompt(`Vui lòng nhập Email: `);
            contacts[i].EMAIL = email;
            let phone = prompt(`Vui lòng nhập Phone: `);
            contacts[i].PHONE = phone;
            alert("Chỉnh sửa thành công!!");
            flag = true;
        }
        if(!flag){
            alert("Người dùng không tồn tại!!!");
        }
    }

}
function removeContact(idToDelete){
    let index = contacts.findIndex(contact => contact.ID === idToDelete);
    if(index !== -1){
        contacts.splice(index, 1);
        alert("Xóa thành công!");
    } else {
        alert("Không tìm thấy ID cần xóa!");
    }
}