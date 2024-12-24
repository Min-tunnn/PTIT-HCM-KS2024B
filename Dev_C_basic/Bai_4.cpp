#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n, arr[100];
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) 
	{
        arr[i]=rand()%100; 
        printf("%d ", arr[i]);
    }

    for (int i=0; i<n-1; i++) 
	{
        int minIndex = i; 
        for (int j=i+1; j<n; j++) 
		{
            if (arr[j]<arr[minIndex]) 
			{ 
                minIndex=j;
            }
        }
        if (minIndex!=i) 
		{
            int temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
    }
    printf("\nGia tri cac phan tu cua mang sau khi sap xep:\n");
    for (int i=0; i<n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

