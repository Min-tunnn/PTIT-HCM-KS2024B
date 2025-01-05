#include<stdio.h>
#include<string.h>

int main() 
{
    char str[]="Lap trinh C rat thu vi 123!";
    int count=0;

    for (int i=0; i<strlen(str); i++) 
	{
        if ((str[i]>='A'&&str[i]<='Z') || (str[i]>='a' && str[i]<='z')) 
		{
            count++; 
        }
    }

    printf("So ky tu la chu cai trong chuoi \"%s\" la: %d\n", str, count);

    return 0;
}

