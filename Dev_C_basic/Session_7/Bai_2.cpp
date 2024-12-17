#include<stdio.h>
int main()
{
	int arr[5], n;
	for (int i=0; i <sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("Nhap arr[%d]:", i);
		scanf("%d", &n);
		arr[i]=n;
	}
	printf("cac mang sau khi nhap la:\n");
	for(int i=1; i <=sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("arr[%d]=%d\n", i, arr[i]);
	}
}
