#include<stdio.h>
int main()
{
	int n;
	printf("Kiem tra so chan hay le: ");
	scanf("%d", &n);
	if(n%2==0)
	{
		printf("La so chan.");
	}
	else
	{
		printf("La so le.");
	}
	return 0;
}
