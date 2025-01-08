#include<stdio.h>
void find_arr(int *arr, int size, int find)
{
	int flag=0; 
	for(int i=0; i<size; i++)
	{
		if(*(arr+i)==find)
		{
			flag=1;
			printf("[%d] ", i);
		}
	}
	if(flag==0)
	{
		printf(" Khong ton tai trong mang!!");
	}
}
int main()
{
	int arr[]={ 2, 3, 4, 2, 19, 21};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	//nhap gia tri can tim trong mang
	int find;
	printf("\nNhap gia tri can tim trong mang: "); scanf("%d", &find);
	//bat dau tim kiem va tra ve kq
	printf("Gia tri (%d) duoc tim thay o vi tri: ", find); 
	find_arr(arr, size, find);
	return 0;
}
