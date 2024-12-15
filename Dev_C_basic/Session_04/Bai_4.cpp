#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n<=0||n>=10);
	for (int i=1; i<=9; i++)
	{
		printf("%dx%d=%d\n", n, i, n*i);
	}
	return 0;
}
