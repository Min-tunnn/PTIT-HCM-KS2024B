#include<stdio.h>
bool SoNto(int arr[], int i) 
{
    if (arr[i] <= 1) return false; 
    for (int j = 2; j * j <= arr[i]; j++) 
	{
        if (arr[i] %j == 0) 
		{
            return false; 
        }
    }
    return true; 
}
int main()
{
	int n=2, arr[n];
	for(int i=1; i<=n; i++)
	{
		printf("Nhap phan tu thu %d: ", i); scanf("%d", &arr[i]);
	}
	for(int i=1; i<=n; i++)
	{
		if(SoNto(arr, i))
		{
			printf("[%d]: %d la so nguyen to.\n", i, arr[i]);
		}
		else
		{
			printf("[%d]: %d khong phai la so nguyen to\n", i, arr[i]);
		}
	}
	
	return 0;
}
