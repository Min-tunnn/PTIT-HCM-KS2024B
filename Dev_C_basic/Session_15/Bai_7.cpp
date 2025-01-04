#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define max 100
int main()
{
	char str[100]="minhtuan9168@gmail.com";
	int count_num=0, count_char=0, count_spec=0;
	printf("Tong so ky tu: %d\n", strlen(str));
	
	for(int i=0; i<strlen(str); i++)
	{
		
		int ASCII=str[i];
		if(isdigit(str[i]))
		{
			count_num++;
		}else if(ASCII>=65&&ASCII<=90||ASCII>=97&&ASCII<=122){
			count_char++;
		}else{
			count_spec++;
		}
	}
	printf("So ky tu trong chuoi: %d\nSo chu so trong chuoi: %d\nSo ky tu dac biet trong chuoi: %d", count_num, count_char, count_spec);
	
}
