#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Nhap so nguyen: ");
	scanf("%s", &str);
	
	for(int i=0; i<=strlen(str); i++)
	{
		printf("%c ", str[i]);
	}
	return 0;
}
