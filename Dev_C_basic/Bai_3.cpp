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

    for (int i=1; i<n; i++) 
	{
        int key=arr[i];
        int j=i-1;

        while (j>=0 && arr[j]>key) 
		{
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("\nGia tri cac phan tu cua mang sau khi sap xep:\n");
    for (int i=0; i<n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

