let items = [];
let choice;
let input;
do{
    choice = parseInt(prompt(`================MENU================
        1. Thêm sản phẩm.
        2. Hiển thị tất cả sản phẩm.
        3. Hiển thị chi tiết sản phẩm theo ID.
        4. Cập nhật thông tin sản phẩm theo ID.
        5. Xóa sản phẩm theo ID.
        6. Lọc sản phẩm theo khoảng giá.
        7. Thoát.`)) ;
        switch (choice){
            case 1:
                addItem();
            break;
            case 2:
               if(checkItems()){
                showItem();
               }
            break;
            case 3: 
                if(checkItems()){
                    input = prompt("Nhập id sản phẩm cần tìm: ");
                    showWidthIDItem(input);
                }
            break;
            case 4:
                if(checkItems()){
                    input = prompt("Nhập id sản phẩm cần chỉnh sửa: ");
                    editItem(input);
                }
            break;
            case 5:
                if(checkItems()){
                    input = prompt("Nhập id sản phẩm cần xóa: ");
                    removeItem(input);
                }
            break;
            case 6:
                if(checkItems()){
                    
                    let input1 = parseInt(prompt("Nhập giá thấp nhất: "));
                    let input2 = parseInt(prompt("Nhập giá cao nhất: "));
                    
                    showWithPrice(input1, input2);
                }
            break;
        }
}while(choice!=7);
function checkItems(){
    if(items.length===0){
        alert("EMPTY");
        return false;
    }else{
        
        return true;
    }
}
function addItem(){
     let flag = true;
    let input_ID = prompt("Nhập id sản phẩm: ");
    for(let i = 0 ; i<items.length; i++){
        if(input_ID==items[i].ID){
            flag = false;
            break;
        }
    }
    
    if(flag){
        let input_NAME = prompt("Nhập tên sản phẩm: ");
        let input_PRICE = prompt("Nhập giá: ");
        let input_CATEGORY = prompt("Nhập loại sản phẩm: ");
        let input_QUANTITY = prompt("Nhập số lượng: ");
        const item = {
            ID : input_ID,
            NAME : input_NAME,
            PRICE : input_PRICE,
            CATEGORY : input_CATEGORY,
            QUANTITY : input_QUANTITY
        }
        items.push(item);
        alert("Thêm sản phẩm vào thành công!!!");
    }else{
        alert(`ID ${input_ID} đã tồn tại!!`);
    } 
}
function showItem(){
    let result = "";
    for(let i = 0; i<items.length; i++){
        result +=
        items[i].ID+" "+
        items[i].NAME+" "+
        items[i].PRICE +" "+
        items[i].CATEGORY +" "+
        items[i].QUANTITY+"\n";
    }
    alert(result);
}
function showWidthIDItem(id){
    for(let i = 0; i<items.length; i++){
        if(items[i].ID==id){
            
            alert(`Sản phẩm thuộc ID: ${id}
                ${items[i].NAME} ${items[i].PRICE} ${items[i].CATEGORY} ${items[i].QUANTITY}`);
        }
    }
}
function editItem(id){
    for(let i = 0; i<items.length; i++){
        if(items[i].ID==id){
            let input_NAME = prompt("Nhập tên: ");
            items[i].NAME = input_NAME;
            let input_PRICE = prompt("Nhập giá: ");
            items[i].PRICE = input_PRICE;
            let input_CATEGORY = prompt("Nhập thể loại: ");
            items[i].CATEGORY = input_CATEGORY;
            let input_QUANTITY = prompt("Nhập số lượng: ");
            items[i].QUANTITY = input_QUANTITY;
            alert("Cập nhật thành công!!!");
        }
    }
}
function removeItem(id){
    for(let i = 0; i<items.length; i++){
        if(items[i].ID==id){
            items.splice(i,1);
            alert("Hoàn tất xóa sản phẩm!!!");
        }
    }
}
function showWithPrice(n1, n2){
    let flag = false;
    let result ="";
    for(let i = 0; i<items.length; i++){
        if(items[i].PRICE>=n1&&items[i].PRICE<=n2){
            result +=
            items[i].ID+" "+
            items[i].NAME+" "+
            items[i].PRICE+" "+
            items[i].CATEGORY+" "+
            items[i].QUANTITY+" "+"\n";
            flag = true;
        }
    }
    if(flag){
        alert(`Các sản phẩm từ ${n1} đến ${n2}: \n`+result);
    }else{
        alert(`Không tìm thây sản phẩm (${n1}-${n2}).`);
    }
    
}