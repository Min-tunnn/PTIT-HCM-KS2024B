#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100
int main()
{
	char c;
	char str[max]="Hello world minh ten trong o";
	printf("%s", str);
	printf("Nhap chu can xoa: "); scanf("%c", &c);
	for(int i=0; i<strlen(str); i++)
	{
		if(c==str[i])
		{
			str[i]=32;
		}
	}
	printf("%s", str);
	return 0;
}
