#include<stdio.h>
int main()
{
	int n1, n2, n3, temp;
	printf("Nhap (1): "); scanf("%d", &n1);
	printf("Nhap (2): "); scanf("%d", &n2);
	printf("Nhap (3): "); scanf("%d", &n3);
	if (n1<n2)
	{
		if(n2<n3)
		{
			printf("%d %d %d", n1, n2, n3);
		}else if(n2>n3)
		{
			if(n1<n3) printf("%d %d %d", n1, n3, n2);
			else printf("%d %d %d", n3, n2, n1);
		}
	}
	else if( n1>n2)
	{
		if(n1<n3)
		{
			printf("%d %d %d", n2, n1, n3);
		}else if(n1>n3)
		{
			if(n2<n3) printf("%d %d %d", n2, n3, n1);
			else printf("%d %d %d", n3, n1, n2);
		}
	}
	
}
