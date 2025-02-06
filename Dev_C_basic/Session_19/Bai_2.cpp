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
    for (int i=0; i<currentLength; i++) {
        printf("%d %s %d %s\n", sinhVien[i].id, sinhVien[i].name, sinhVien[i].age, sinhVien[i].phoneNumber);
    }
}

void sapXepSinhVienTheoTen(struct SinhVien sinhVien[], int currentLength) 
{
    struct SinhVien temp;
    for (int i=0;i<currentLength - 1; i++) 
	{
        for (int j=i+1; j<currentLength; j++) 
		{
            if (strcmp(sinhVien[i].name, sinhVien[j].name) > 0) 
			{
                temp=sinhVien[i];
                sinhVien[i] = sinhVien[j];
                sinhVien[j] = temp;
            }
        }
    }
}

int main() {
    struct SinhVien sinhVien[MAX_SINH_VIEN] = 
	{
        {1, "Minh Tuan", 20, "0123456789"},
        {2, "tran Trog", 21, "0987654321"},
        {3, "Le min ho", 22, "0912345678"},
        {4, "trung cut", 23, "0987123456"},
        {5, "youngcook", 24, "0934567890"}
    };

    int currentLength = 5;  

    printf("Danh sach sinh vien ban dau:\n");
    inDanhSachSinhVien(sinhVien, currentLength);

    sapXepSinhVienTheoTen(sinhVien, currentLength);

    printf("\nDanh sach sau khi sap xep theo ten:\n");
    inDanhSachSinhVien(sinhVien, currentLength);

    return 0;
}

