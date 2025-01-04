#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 100
int main()
{
	char str[max]="@hello world my name  nguyen tran minh tuan\n";
	printf("%s", str);
	for(int i=0; i<strlen(str); i++)
	{
		if(str[i]==32&&str[i+1]>='a'&&str[i+1]<='z')
		{
			i++;
			str[i]-=32;
		}else if(i==0&&str[i]>='a'&&str[i]<='z'){
			str[i]-=32;
		}
		
	}
	printf("%s", str);
}
