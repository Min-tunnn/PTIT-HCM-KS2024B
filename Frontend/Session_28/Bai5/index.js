const company = {
    name: "RikkeiSoft",
    location: "Hà Nội",
    employees: [
        { name: "Nguyễn Văn Luận", position: "Developer" },
        { name: "Nguyễn Văn Hoàng", position: "Tester" },
        { name: "Hoàng Nam Cao", position: "Manager" }
    ]
};
for(let i =0 ; i<company.employees.length; i++){
    document.write(`${company.name}`+" "+`${company.employees[i].name}`+`${company.employees[i].position}`);
    document.write("<br>");
}
