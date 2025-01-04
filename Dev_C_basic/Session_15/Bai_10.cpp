#include<stdio.h>
#include<string.h>

int main() 
{
    char str[]="bcdac";
    int freq[256]={0};

    for (int i=0; i<strlen(str); i++) 
	{
        freq[(int)str[i]]++;
    }

    printf("So lan xuat hien cua tung ky tu:\n");
    for (int i=0; i<256; i++) 
	{
        if (freq[i] > 0) 
		{
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}

