#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define max 1000

int main()
{
	char str[max], find;
	int count=0;
	printf("Nhap chuoi: ");
	fgets(str, max, stdin);
	printf("Nhap tu can tim: "); scanf("%c", &find);	
	for(int i=0; i<strlen(str); i++)
	{
		if(str[i]==find)
		{
			count++;
		}
	}
	printf("\nSo lan ky tu %c xuat hien trong chuoi la: %d", find, count);
	return 0;
}
