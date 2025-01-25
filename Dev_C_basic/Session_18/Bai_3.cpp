#include<stdio.h>
#include<string.h>
struct sinhvien{
	int id;
	char name[50];
	int age;
	char phoneNumber[11];
};
int main()
{
	struct sinhvien sv[10];
	int sl=5;
	for (int i=0; i<sl; i++)
	{
		sv[i].id=i+1;
		printf("Nhap ten: "); scanf("%s", &sv[i].name);
		printf("Nhap tuoi: "); scanf("%d", &sv[i].age);
		printf("Nhap sdt: "); scanf("%s", &sv[i].phoneNumber);
	}
	printf("danh sach sau khi nhap thong tin khach hang: \n");
	for (int i=0; i<sl; i++)
	{
		printf("%d %s %d %s\n", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNumber);
	}
	
}
