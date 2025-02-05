#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} SinhVien;

void hienThiDanhSach(SinhVien ds[], int n) 
{
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i<n; i++) {
        printf("%d %s %d %s\n", ds[i].id, ds[i].name, ds[i].age, ds[i].phoneNumber);
    }
}

void chenSinhVien(SinhVien ds[], int *n) 
{
    if (*n>=MAX) 
	{
        printf("Mang day !!!!\n");
        return;
    }
    int pos;
    printf("Nhap vi tri can chen (0-%d): ", *n);
    scanf("%d", &pos);
    if (pos < 0 || pos > *n) {
        printf("Vtri khong hop le!\n");
        return;
    }
    SinhVien sv;
    printf("ID: ");
    scanf("%d", &sv.id);
    printf("Ten: ");
    scanf(" %[^"]", sv.name);
    printf("Tuoi: ");
    scanf("%d", &sv.age);
    printf("SDT: ");
    scanf("%s", sv.phoneNumber);
    
    for (int i=*n; i>pos; i--) 
	{
        ds[i]=ds[i-1];
    }
    ds[pos]=sv;
    (*n)++;
}

int main() 
{
    SinhVien ds[MAX] = 
	{
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0987654321"},
        {3, "Tran Van C", 19, "0345678901"},
        {4, "Pham Thi D", 22, "0567890123"},
        {5, "Hoang Van E", 23, "0678901234"}
    };
    int n=5;
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Hien thi danh sach sinh vien\n");
        printf("2. Chen sinh vien\n");
        printf("3. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                hienThiDanhSach(ds, n);
                break;
            case 2:
                chenSinhVien(ds, &n);
                break;
            case 3:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 3);
    return 0;
}

