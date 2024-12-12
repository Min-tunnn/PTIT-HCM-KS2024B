#include<stdio.h>
#include<stdlib.h>
void input(int &n)
{
	int age, ran_word; 
	
	long long numberPhone;
	for (int i=1; i<=n;i++)
	{
		
		
		age=rand()%10+20;
		numberPhone=(long long )(rand() % 90000000) + 1000000;
		ran_word=rand()%26+65;// ascii
		if (i>9) 
		{
		printf("|  %d | Nguyen Van %c    |  %d  | 091%lld     | nv%c00%d@gmail.com| \n",i ,ran_word ,age , numberPhone, ran_word, i );
		printf("--------------------------------------------------------------------\n");
		}else
		printf("|  %d  | Nguyen Van %c    |  %d  | 091%lld     | nv%c00%d@gmail.com | \n",i ,ran_word ,age , numberPhone, ran_word, i );
		printf("--------------------------------------------------------------------\n");
	}
}
int main()
{
	//  nhan de bai
	int n;
	printf("Nhap so luong nhan vien: ");
	scanf("%d", &n);
	printf("			DANH SACH SINH VIEN			\n");
	printf("--------------------------------------------------------------------\n");
	printf("| STT | Ho va ten	| Tuoi | So dien thoai  | email            |\n");
	printf("--------------------------------------------------------------------\n");
	input(n);
	return 0;
}
