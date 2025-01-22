#include<stdio.h>
#include<string.h>
#define max 100
void daonguoc(char *inputString, char *reverseString)
{
	int lenght=strlen(inputString);
	char *start=inputString;
	char *end=inputString+lenght-1;
	while(end>=start)
	{
		*reverseString = *end;
		reverseString++;
		end--;
	}
	*reverseString='\0';
}
int main()
{
	char inputString[max], reverseString[max];
	printf("Nhap chuoi: "); 
	fgets(inputString, sizeof(inputString), stdin);
	inputString[strcspn(inputString, "\n")]='\0';
	daonguoc(inputString, reverseString);
	printf("Chuoi sau khi dao nguoc: %s\n", reverseString);
}
