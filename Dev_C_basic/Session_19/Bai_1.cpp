#include <stdio.h>
#include <string.h>
#define MAX_SINH_VIEN 5

struct SinhVien 
{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void inDanhSachSinhVien(struct SinhVien sinhVien[], int currentLength) 
{
    for (int i = 0; i < currentLength; i++) 
	{
        printf("%d %s %d %s\n", sinhVien[i].id, sinhVien[i].name, sinhVien[i].age, sinhVien[i].phoneNumber);
    }
}

void xoaSinhVien(struct SinhVien sinhVien[], int *currentLength, int id) 
{
	
    int index = -1;
    for (int i=0; i<*currentLength; i++) 
	{
        if (sinhVien[i].id==id) 
		{
            index=i;
            break;
        }
    }

    if (index==-1) 
	{
        printf("Sinh vien voi id %d khong ton tai!\n", id);
        return;
    }

    for (int i=index; i<*currentLength-1; i++) 
	{
        sinhVien[i]=sinhVien[i+1];
    }
    (*currentLength)--;

    printf("Da xoa %d.\n", id);
}

int main() 
{
    struct SinhVien sinhVien[MAX_SINH_VIEN] = 
	{
        {1, "Nguyen A", 20, "0123456789"},
        {2, "Tran B", 21, "0987654321"},
        {3, "Le C", 22, "0912345678"},
        {4, "Pham D", 23, "0987123456"},
        {5, "Hoang E", 24, "0934567890"}
    };

    int currentLength=5;  
    int idToDelete;

    printf("Danh sach sinh vien:\n");
    inDanhSachSinhVien(sinhVien, currentLength);

    printf("Nhap id sinh vien can xoa: ");
    scanf("%d", &idToDelete);

    xoaSinhVien(sinhVien, &currentLength, idToDelete);

    printf("\nDanh sach sau khi xoa sinh vien:\n");
    inDanhSachSinhVien(sinhVien, currentLength);

    return 0;
}

