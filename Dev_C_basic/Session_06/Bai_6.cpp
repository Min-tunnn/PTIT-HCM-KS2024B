#include<stdio.h>
int main()
{
	int n[5];
	for (int i=0; i<sizeof(n)/sizeof(n[0]);i++)
	{
		printf("(%d):", i);
		scanf("%d", &n[i]);
	}
	for (int i=0; i<sizeof(n)/sizeof(n[0]);i++)
	{
		if(n[i]%2==0)
		{
			n[i]+=3;
		}
		else
		{
			n[i]+=2;
		}
		printf("%d ", n[i]);
	}
	return 0;
}
