#include<stdio.h>
int main()
{
	int arr[5], n;
	int tong=0;
	for(int i=1; i<=sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("(%d)= ", i);
		scanf("%d", &n);
		arr[i]=n;
	}
	printf("Tinh tong so le :\n");
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		if (arr[i]%2==0) i++;
		else
		printf("%d+%d=\n", tong,  arr[i]);
			tong+=arr[i];	
	}
	printf("%d", tong);
}
	
	

