let cart = [];
let storage = [];
let choice;
do{
    choice = parseInt(prompt(`===============MENU===============
        1. Hiển thị danh sách theo thể loại.
        2. Thêm sách mới vào kho.
        3. Tìm kiếm sách bằng tên hoặc ID.
        4. Mua sách.
        5. Sắp xếp sách theo giá.
        6. Tính tổng số lượng sách đã mua.
        7.  Hiển thi tổng số lượng sách trong kho.
        8. Thoát chương trình.`));
    switch(choice){
        case 1:
            showbook();
            break;
        case 2:
            addBook();
            break;
        case 3:
            findBook();
            break;
        case 4:
            buyBook();
            break;
        case 5:
            sortBook();
            break;
        case 6:
            totalPriceincart();
            break;
        case 7:
            totalQuantityInStorage();
            break;
        case 8:
            alert("Đã thoát chương trình.");
            break;
        default:
            alert("Lựa chọn không hợp lệ.");
    }
}while(choice!=8);
function showbook(){
    let result = "";
    for (let i = 0; i<storage.length; i++){
        result+=
        "ID: "+storage[i].ID+" "+
        "NAME: "+storage[i].NAME+" "+
        "PRICE: "+storage[i].PRICE+" "+
        "QUANTITY: "+storage[i].QUANTITY+" "+
        "CATE: "+storage[i].CATEGORY+" "+"\n"
    }
    alert(result);
}


function addBook(){
    let flag = true;
    let result = "";
    let id = parseInt(prompt("Nhập mã sách: "));
    for(let i = 0; i<storage.length; i++){
        if(id==storage[i].ID){
            flag = false;
            break;
        }
    }
    if(flag){
        let name = prompt("Nhập tên sách: ");
        let price = parseInt(prompt("Nhập giá sách: "));
        let quantity = parseInt(prompt("Nhập số lượng sách: "));
        let category = prompt("Nhập thể loại sách: ");
        const arr = {
            ID: id,
            NAME: name,
            PRICE: price,
            QUANTITY: quantity,
            CATEGORY: category
        };
        
        storage.push(arr);
    }else{
        alert("ID bị trùng vui lòng nhập lại !!!");
    }
}
function findBook(){
    let input;
    let result="";
    let choice = parseInt(prompt(`============Tìm kiếm============
        1. Theo tên.
        2. Theo ID.
        3. Thoat.
        `));
    do{
        switch(choice){
            case 1:
                result = "";
                input = prompt("Nhập tên sách cần tìm: ");
                for( let i =0 ; i<storage.length; i++){
                    if(input==storage[i].NAME){
                        result+=
                        "ID: "+storage[i].ID+" "+
                        "NAME: "+storage[i].NAME+" "+
                        "PRICE: "+storage[i].PRICE+" "+
                        "QUANTITY: "+storage[i].QUANTITY+" "+
                        "CATE: "+storage[i].CATEGORY+" "+"\n"
                    }
                }
                alert(`tìm kiếm: ${input}:
                ${result}`);
                    
                break;
            case 2:
                result = "";
                input =parseInt(prompt("Vui lòng nhập ID: "));
                for(let i = 0 ; i<storage.length; i++){
                    if(input==storage[i].ID){
                        result+=
                        "ID: "+storage[i].ID+" "+
                        "NAME: "+storage[i].NAME+" "+
                        "PRICE: "+storage[i].PRICE+" "+
                        "QUANTITY: "+storage[i].QUANTITY+" "+
                        "CATE: "+storage[i].CATEGORY+" "+"\n"
                    }
                }
                alert(`tìm kiếm: ${input}:\n${result}`);
                
                break;
        }
    }while(choice!=3);
}

function buyBook() {
    let input = parseInt(prompt("Nhập ID sách muốn mua: "));
    let found = false;

    for (let i = 0; i<storage.length; i++) {
        if (storage[i].ID===input) {
            found = true;
            let input_quantity=parseInt(prompt("Nhập số lượng muốn mua: "));
            if (input_quantity>0 && input_quantity<=storage[i].QUANTITY) {
                const bookToCart = {
                    ID: storage[i].ID,
                    NAME: storage[i].NAME,
                    PRICE: storage[i].PRICE,
                    QUANTITY: input_quantity,
                    CATEGORY: storage[i].CATEGORY
                };
                cart.push(bookToCart);
                storage[i].QUANTITY -= input_quantity;
                alert("Thêm vào giỏ hàng thành công!");
            } else {
                alert("Số lượng không hợp lệ!");
            }
        break;
        }
    }
    if(!found){
        alert("Không tìm thấy sách!");
    }
}
function sortBook() {
    if (storage.length === 0) {
        alert("Kho trống, không có sách để sắp xếp.");
        return;
    }
    let type = parseInt(prompt("Sắp xếp theo giá:\n1. Tăng dần\n2. Giảm dần"));
    if (type===1) {
        storage.sort((a, b)=>a.PRICE-b.PRICE);
    } else if (type===2) {
        storage.sort((a, b)=>b.PRICE-a.PRICE);
    } else {
        alert("Lựa chọn không hợp lệ!");
        return;
    }
    showbook(); 
}
function totalPriceincart() {
    if (cart.length === 0) {
        alert("Giỏ hàng trống!");
        return;
    }
    let result = "";
    let totalprice = 0;

    for (let i = 0; i < cart.length; i++) {
        totalprice += cart[i].PRICE * cart[i].QUANTITY;
        result +=
            "ID: " + cart[i].ID + " " +
            "NAME: " + cart[i].NAME + " " +
            "PRICE: " + cart[i].PRICE + " " +
            "QUANTITY: " + cart[i].QUANTITY + " " +
            "CATE: " + cart[i].CATEGORY + "\n";
    }

    alert(result + "Tổng tiền: " + totalprice + " VND");
}
function totalQuantityInStorage() {
    let total = 0;
    for (let i = 0; i < storage.length; i++) {
        total += storage[i].QUANTITY;
    }
    alert("Tổng số lượng sách trong kho: " + total);
}