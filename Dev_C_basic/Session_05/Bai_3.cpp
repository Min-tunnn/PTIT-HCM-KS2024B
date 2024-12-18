#include<stdio.h>
int main()
{
	int n;
	long long tong;
	printf("nhap n:");
	scanf("%d", &n);
	for (int i=0; i<=n; i++)
	{
		tong+=i;
	}
	printf("%d", tong);
}
