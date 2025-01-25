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
	struct sinhvien sv[5]={ 1, "Tuan", 12, "01234567",
							 2, "Trong", 23, "0217822",
							 3, "CuongZip", 33, "0232422",
							 4, "DucCong", 35, "0233212",
							 5, "ThaiDui", 33, "098797"};
	
	int find;
	bool flag=1;
	again:
	printf("Nhap id sinh vien can sua: "); scanf("%d", &find);
	for(int i=0; i<5; i++)
	{
		if(find==sv[i].id)
		{
			flag=1;
			printf("%d %s %d %s\n", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNumber);
			printf("Chinh sua thong tin sinh vien (%d)\n", sv[i].id);
			printf("Ten: "); scanf("%s", &sv[i].name);
			printf("Tuoi: "); scanf("%d", &sv[i].age);
			printf("sdt: "); scanf("%s", &sv[i].phoneNumber);
			printf("DANH SACH SINH VIEN SAU KHI CHINH SUA: \n");
			for(int k=0;k<5; k++)
			{
				printf("%d %s %d %s\n", sv[k].id, sv[k].name, sv[k].age, sv[k].phoneNumber);
			}
		}else
		{
			flag=0;
		}
	}// sau khi tim thay sinh vien bat dau thuc hien conog viec thay doi thong tin
	
	bool(flag==false);
	{
		printf("Khong tim thay sinh vien!!!\n");
		goto again;
	}
	
}
