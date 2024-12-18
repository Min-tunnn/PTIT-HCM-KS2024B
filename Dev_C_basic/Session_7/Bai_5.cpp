#include<stdio.h>
int main()
{
	int n[5];
	
	printf("Nhap 5 so:\n");
	for (int i=1; i<=sizeof(n)/sizeof(n[0]); i++)
	{
		printf("(%d):", i);
		scanf("%d", &n[i]);
	}
	int max=n[0];	
	int min=n[0];
	for (int i=0; i<sizeof(n)/sizeof(n[0]); i++)
	{
		if(max<=n[i])
		{
			max=n[i];
		}
	}
	for(int i=0; i<sizeof(n)/sizeof(n[0]); i++)
	{
		if(min>=n[i])
		{
			min=n[i];
		}
	}
	printf("so lon nhat: %d\n", max);
	printf("so nho nhat: %d\n", min);
	
	
}
