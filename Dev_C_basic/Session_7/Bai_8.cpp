#include<stdio.h>
int main()
{
	int n, count=0;
	printf("nhap n: ");
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++)
	{
		printf("[%d]:", i); scanf("%d", &arr[i]);
	}
	for (int i=0; i<n; i++)
	{
		if (count ==3)
		{
			printf("\n");
			count=0;
		}
		printf("%d ", arr[i]);
		count++;
		
	}
}
