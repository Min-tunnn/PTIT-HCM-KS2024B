#include<stdio.h>
#include<string.h>
int main()
{
	char pass[]="Tuan9168";
	char temp[100];
	again:
	printf("Nhap mk: "); scanf("%49s", &temp);
	if(strcmp(pass, temp)==0)
	{
		printf("Nhap mk chinh xac ");
	}
	else
	{
		printf("Vui long nhap lai:\n");
		goto again;
	}
	return 0;
}
