#include<stdio.h>
#include<string.h>

int main() 
{
    char str[]="Lap trinh C rat thu vi va huu ich";
    int count=0;
    int inWord=0;

    for (int i=0; i<strlen(str); i++) 
	{
        if (str[i]!=32) 
		{
            if (!inWord) 
			{
                inWord=1;
                count++;
            }
        } else 
		{
            inWord =0;
        }
    }

    printf("So tu trong chuoi \"%s\" la: %d\n", str, count);

    return 0;
}

