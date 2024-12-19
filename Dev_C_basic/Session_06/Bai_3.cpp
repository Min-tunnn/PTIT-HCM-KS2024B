#include<stdio.h>
#include<string.h>
int main()
{
	long long pass[100], temp[100];
	printf("Dat mk: ");
	scanf("%s", &pass);
	do
	{
		printf("Nhap mk: ");
		scanf("%s", &temp);
		printf("%s = %s", pass, temp);
	}while(pass!=temp);
	printf("Nhap mk chinh xac ");
	return 0;
}
