#include<stdio.h>
int main()
{
	int arr[5], n;
	printf("- Nhap mang arr[5] -\n");
	for (int i=0; i<=sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("arr[%d]:", i);
		scanf("%d", &n);
		arr[i]=n;
	}
	//kiem tra chan le
	printf("Cac phan tu so chan co trong mang: \n");
	for (int i=0; i<=sizeof(arr)/sizeof(arr[0]); i++)
	{
		if (arr[i]%2==0)
		{
			printf("arr[%i]=%d ", i, arr[i]);
		}
	}
	//kiem tra chan le
	printf("Cac phan tu so le co trong mang: \n");
	for (int i=0; i<=sizeof(arr)/sizeof(arr[0]); i++)
	{
		if (arr[i]%2!=0)
		{
			printf("arr[%i]=%d ", i, arr[i]);
		}
	}
	
}
