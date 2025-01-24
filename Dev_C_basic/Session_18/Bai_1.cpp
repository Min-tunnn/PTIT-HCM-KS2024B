#include<stdio.h>
#include<string.h>
struct sinhvien{
	char name[50];
	int age;
	char phoneNumber[11];
};
int main()
{
	struct sinhvien sv[10];
	int sl;
	printf("nhap so luong sinh vien: "); scanf("%d", &sl);
	for (int i=0; i<sl; i++)
	{
		printf("Nhap ten: "); scanf("%s", &sv[i].name);
		printf("Nhap tuoi: "); scanf("%d", &sv[i].age);
		printf("Nhap sdt: "); scanf("%s", &sv[i].phoneNumber);
	}
	printf("danh sach sau khi nhap thong tin khach hang: \n");
	for (int i=0; i<sl; i++)
	{
		printf("%d %s %d %s\n", i+1, sv[i].name, sv[i].age, sv[i].phoneNumber);
	}
	
}
