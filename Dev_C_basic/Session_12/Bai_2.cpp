#include<stdio.h>
#include<stdlib.h>
#define max 100
void outputArray(int n, int arr[])
{
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int n, arr[max];
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d", &n);
	arr[n];
	for(int i=0; i<n; i++)
	{
		arr[i]=rand()%10;
	}
	outputArray(n, arr);
	return 0;	
}

