#include<stdio.h>
void output(int *arr, int size)
{
	for(int i=0; i<size; i++)
	{
		printf("[%d]:%d ", i, *(arr+i));
	}
}
int main()
{
	int arr[]={ 1, 2, 3};
	int size = sizeof(arr)/sizeof(arr[0]); 
	int pos, value; 
	printf("Nhap vi tri: "); scanf("%d", &pos);
	printf("Nhap gia tri: "); scanf("%d", &value);
	arr[pos]=value;
	output(arr, size);
}
