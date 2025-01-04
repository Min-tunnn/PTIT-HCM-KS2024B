#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 1000
int main()
{
	char str[1000];
	printf("Nhap chuoi: ");
	fgets(str, max, stdin);
	for(int i=0; i<strlen(str); i++)
	{
		printf("%c ", str[i]);
	}
}
