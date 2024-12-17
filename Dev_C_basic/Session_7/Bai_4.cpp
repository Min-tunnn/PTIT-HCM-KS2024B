#include<stdio.h>
int main()
{
	int n;
	printf("Nhap so phan tu muon nhap: ");
	scanf("%d", &n);
	int arr[n];
	printf("Nhap %d mang: \n", n);
	
	for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("arr[%d]:", i);
		scanf("%d", &n);
		arr[i]=n;
	}
	// in mang vua nhap
	printf("In cac mang vua nhap: \n");
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("arr[%d]=%d\n", i ,arr[i]);
	}
	return 0;
}
