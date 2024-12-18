#include<stdio.h>
int main()
{
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		again:
		printf("(%d):", i);
		scanf("%d", &arr[i]);
		if (arr[i]%2==0)
		{
			printf("Vui long nhap lai (%d)\n", i);
			goto again;
		}
	}
	printf("Cac mang sau khi nhap: \n");
	for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	
}
