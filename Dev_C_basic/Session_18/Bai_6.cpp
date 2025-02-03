#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ngaysinh{
	int day;
	int month;
	int year;
};
struct sinhvien{
	char id[5];
	char name[50];
	struct ngaysinh date;
	long long phoneNumber;
};
int main()
{
	int i=-1, choice;
	struct sinhvien sv[100];
	menu:
	printf("(1) THEM SINH VIEN.\n");
	printf("(2) Hien thi danh sach sinh vien\n");
	printf("(3) Thoat\n");
	printf("Lua chon: "); scanf("%d", &choice); 
	getchar();
	switch (choice)
	{
		case 1:
			{
				i+=1;
				printf("Ma sinh vien: "); scanf("%s", &sv[i].id);
				getchar();
				
				printf("Ten sinh vien: "); fgets(sv[i].name, sizeof(sv[i].name), stdin);
				sv[i].name[strcspn(sv[i].name, "\n")] = 0;
				printf("Ngay sinh: "); scanf("%d %d %d", &sv[i].date.day, &sv[i].date.month, &sv[i].date.year);
				printf("So dien thoai: "); scanf("%lld", &sv[i].phoneNumber);
				goto menu;
				break;
			}
		case 2:
			{
				
				for(int k=0; k<=i; k++)
				{
					printf("%s - %s - (%d/%d/%d) - %lld\n", sv[k].id, sv[k].name, sv[k].date.day, sv[k].date.month, sv[k].date.year, sv[k].phoneNumber);
				}
				goto menu;
				break;
			}
		case 3:
			{
				system("pause");
				return 0;
			}
		default:
			printf("Vui long nhap lai (1-3).\n"); goto menu;
	}
	return 0;
}
