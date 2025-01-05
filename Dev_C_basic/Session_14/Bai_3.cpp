#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 1000
int main()
{
	char str[max];
	printf("Nhap chuoi: ");
	fgets(str, max, stdin);
	int j=0;
	for(int i=strlen(str)-2; i>=(strlen(str)-2)/2; i--)
	{
		char temp = str[i];
		str[i]=str[j];
		str[i]=temp;
		j++;
	}
	for(int i=0; i<strlen(str); i++)
	{
		printf("%c ", str[i]);
	}
	return 0;
}
