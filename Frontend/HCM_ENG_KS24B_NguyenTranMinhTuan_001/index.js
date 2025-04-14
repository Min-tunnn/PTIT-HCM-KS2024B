let student_manager = [];

function btn_add() {
    let name = document.getElementById("input_name").value.trim();
    let id = document.getElementById("input_id").value.trim();
    let email = document.getElementById("input_email").value.trim();
    let clas = document.getElementById("input_clas").value.trim();

    document.getElementById("er_name").style.display = "none";
    document.getElementById("er_id").style.display = "none";
    document.getElementById("er_email").style.display = "none";
    document.getElementById("er_clas").style.display = "none";

    let FindError = false;

    if (name ==="") {
        document.getElementById("er_name").style.display = "block";
        FindError = true;
    }
    if (id === "") {
        document.getElementById("er_id").style.display = "block";
        FindError = true;
    }
    for (let i = 0; i<student_manager.length ;i++){
        if(id==student_manager[i].ID){
            document.getElementById("er_id").innerText = "Id bị trùng vui lòng nhập lại";
            document.getElementById("er_id").style.display = "block";
            FindError = true;
        }
    }
    
    if (email ==="") {
        document.getElementById("er_email").innerText = "Email không được để trống";
        document.getElementById("er_email").style.display = "block";
        FindError = true;
    } else if (!email.endsWith("@gmail.com")) {
        document.getElementById("er_email").innerText = "Email phải kết thúc bằng @gmail.com";
        document.getElementById("er_email").style.display = "block";
        FindError = true;
    }
    if (clas==="") {
        document.getElementById("er_clas").style.display = "block";
        FindError = true;
    }

    if (!FindError) {
        let student = {
            NAME: name,
            ID: id,
            EMAIL: email,
            CLAS: clas
        };
        student_manager.push(student);
        alert("Thêm sinh viên thành công!");
        render();

        document.getElementById("input_name").value = "";
        document.getElementById("input_id").value = "";
        document.getElementById("input_email").value = "";
        document.getElementById("input_clas").value = "";
    }
}

function render(){
    let table = document.getElementById("table_body");
    table.innerHTML = ""; 

    student_manager.forEach(student=>{
        let row = table.insertRow();
        row.insertCell(0).innerText = student.NAME;
        row.insertCell(1).innerText = student.ID;
        row.insertCell(2).innerText = student.EMAIL;
        row.insertCell(3).innerText = student.CLAS;
        row.insertCell(4).innerHTML = `
            <button onclick="btn_edit('${student.ID}')" style="width: 65.23px; height: 35.5px ;background-color: #2ECC71; border-radius: 5px">Sửa</button>
            <button onclick="btn_delete('${student.ID}')" style="width: 65.23px; height:35.5px;background-color: #E74C3C; border-radius: 5px">Xóa</button>
        `;
    });
}
document.getElementById("search_input").addEventListener("keydown", function(event) {
    if (event.key==="Enter"){
        searchByName();
    }
});
function searchByName() {
    let keyword = document.getElementById("search_input").value.trim().toLowerCase();
    let table = document.getElementById("table_body");
    table.innerHTML = "";

    let filteredStudents = student_manager.filter(student=> 
        student.NAME.toLowerCase().includes(keyword)
    );

    filteredStudents.forEach(student => {
        let row = table.insertRow();
        row.insertCell(0).innerText = student.NAME;
        row.insertCell(1).innerText = student.ID;
        row.insertCell(2).innerText = student.EMAIL;
        row.insertCell(3).innerText = student.CLAS;
        row.insertCell(4).innerHTML = `
            <button onclick="btn_edit('${student.ID}')" style="width: 65.23px; height: 35.5px; background-color: #2ECC71; border-radius: 5px;">Sửa</button>
            <button onclick="btn_delete('${student.ID}')" style="width: 65.23px; height: 35.5px; background-color: #E74C3C; border-radius: 5px;">Xóa</button>
        `;
    });
}

function btn_delete(id) {
    if (confirm("Bạn có chắc muốn xóa không?")) {
        student_manager = student_manager.filter(student => student.ID !== id);
        render();
    }
}

function btn_edit(id) {
    document.getElementById("form_btn_edit").style.display="block";
}
function btn_closeEdit(){
    document.getElementById("form_btn_edit").style.display="none";
}
let editID = null; 

function btn_edit(id){
    let student = student_manager.find(student => student.ID === id);
    if (student) {
        document.getElementById("input_name_edit").value = student.NAME;
        document.getElementById("input_id_edit").value = student.ID;
        document.getElementById("input_email_edit").value = student.EMAIL;
        document.getElementById("input_clas_edit").value = student.CLAS;

        document.getElementById("er_name_edit").style.display = "none";
        document.getElementById("er_id_edit").style.display = "none";
        document.getElementById("er_email_edit").style.display = "none";
        document.getElementById("er_clas_edit").style.display = "none";

        editID = id; 
        document.getElementById("form_btn_edit").style.display = "block";
    }
}
function btn_acpEdit(){
    let name = document.getElementById("input_name_edit").value.trim();
    let id = document.getElementById("input_id_edit").value.trim();
    let email = document.getElementById("input_email_edit").value.trim();
    let clas = document.getElementById("input_clas_edit").value.trim();

    document.getElementById("er_name_edit").style.display = "none";
    document.getElementById("er_id_edit").style.display = "none";
    document.getElementById("er_email_edit").style.display = "none";
    document.getElementById("er_clas_edit").style.display = "none";

    let FindError = false;

    if (name ==="") {
        document.getElementById("er_name_edit").style.display = "block";
        FindError = true;
    }
    if (id === "") {
        document.getElementById("er_id_edit").style.display = "block";
        FindError = true;
    } else if (id!==editID) {
        for (let i = 0; i < student_manager.length; i++) {
            if (id === student_manager[i].ID) {
                document.getElementById("er_id_edit").innerText = "ID bị trùng, vui lòng nhập lại";
                document.getElementById("er_id_edit").style.display = "block";
                FindError = true;
                break;
            }
        }
    }
    if (email === ""){
        document.getElementById("er_email_edit").innerText = "Email không được để trống";
        document.getElementById("er_email_edit").style.display = "block";
        FindError = true;
    } else if (!email.endsWith("@gmail.com")) {
        document.getElementById("er_email_edit").innerText = "Email phải kết thúc bằng @gmail.com";
        document.getElementById("er_email_edit").style.display = "block";
        FindError = true;
    }
    if (clas === ""){
        document.getElementById("er_clas_edit").style.display = "block";
        FindError = true;
    }

    if (!FindError){
        for (let i = 0; i < student_manager.length; i++){
            if (student_manager[i].ID === editID) {
                student_manager[i].NAME = name;
                student_manager[i].ID = id;
                student_manager[i].EMAIL = email;
                student_manager[i].CLAS = clas;
                break;
            }
        }

        render();
        document.getElementById("form_btn_edit").style.display = "none";
        alert("Cập nhật sinh viên thành công!");
    }
}


