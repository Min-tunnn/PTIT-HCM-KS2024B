#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 1000
int main()
{
	char str[1000];
	printf("Nhap chuoi: ");
	fgets(str, max, stdin);
//	printf("Nhap: "); scanf("%s", &str);
	printf("Thong tin ban cua nhap la: %s", str);
}
