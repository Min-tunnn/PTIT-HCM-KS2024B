#include<stdio.h>
int main()
{
	int n, n1, n2;
	printf("(1)"); scanf("%d", &n);
	printf("(2)"); scanf("%d", &n1);	
	printf("(3)"); scanf("%d", &n2);
	if(n2>n1&&n2<n)
	{
		printf("%d nam trong khoang %d-%d", n2, n1, n);
	}else if(n2<n1&&n2>n)
	{
		printf("%d nam trong khoang %d-%d", n2, n, n1 );
	}
	return 0;
}
