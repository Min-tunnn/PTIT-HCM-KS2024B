#include<stdio.h>
void Bignumber(int n,int arr[]) 
{
    for (int i=0; i<n-1; i++) 
	{
        for (int j=0; j<n-i-1; j++) 
		{
            if (arr[j]>arr[j+1]) 
			{
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("So lon nhat la: %d", arr[n-1]);
}
int main()
{
	int n;
	printf("Nhap so luong phan tu trong mang: "); scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		printf("[%d]:", i); scanf("%d", &arr[i]);
	}
	Bignumber(n, arr);
	return 0;
}
