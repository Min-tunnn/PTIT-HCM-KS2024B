#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("a[%d]=%d\n", i, arr[i]);
		
	}
	printf("Do dai cua mang: %d", sizeof(arr)/sizeof(arr[0]));
	
}
