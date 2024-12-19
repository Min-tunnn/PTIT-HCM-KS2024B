#include<stdio.h>
int main()
{
	int n[5], slChan, slLe;
	for (int i=0; i<sizeof(n)/sizeof(n[0]); i++)
	{
		printf("Nhap (%d):", i);
		scanf("%d", &n[i]);
	}
	for (int i=0; i<sizeof(n)/sizeof(n[0]); i++)
	{
		printf("%d ", n[i]);
		
	}
	for (int i=0; i<sizeof(n)/sizeof(n[0])-1; i++)
	{
		if(n[i]%2==0) 
		{
			++slChan;
		}else
		{
			++slLe;
		}
	}
	printf("\nSo luong chan la: %d\n", slChan);
	printf("So luong le la: %d", slLe);
	return 0;
}
