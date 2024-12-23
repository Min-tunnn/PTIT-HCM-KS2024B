#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10], position, newValue;
	for (int i=0; i<10; i++)// random mang
	{
		arr[i]=rand()%19;
	}
		for (int i=0; i<10; i++)//xuat mang sau khi nha random
	{
		printf("%d ", arr[i]);
	}
	again://nhap sai vi tri phan tu quay l?i cho nay
	printf("\nNhap vi tri can sua: "); scanf("%d", &position);
	if(position>=0&&position<10)//vtri dung thi tiep tuc dong lenh
	{	
		printf("Nhap phan tu muon sua: "); scanf("%d", &newValue);
		arr[position]=newValue;// thay the phan tu t?i vi tri 
		printf("Mang sau khi sua la:\n");
		for (int i=0; i<10; i++)
		{
			printf("%d ", arr[i]);
		}
	}
	else
	{
		printf("Nhap vtri sai vui long nhap lai!!:\n");
		goto again;
	}
	return 0;
}

