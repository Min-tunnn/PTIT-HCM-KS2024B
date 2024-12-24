#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int arr[100], n, search, find = 0;
    printf("Nhap so phan tu cua mang 0-100: "); scanf("%d", &n);
    
    printf("Gia tri cac phan tu cua mang:\n");
    for (int i=0; i<n; i++)
	{
        arr[i] = rand()%10; 
        printf("%d ", arr[i]);
    }

    printf("\n\nNhap phan tu can tim: "); scanf("%d", &search);
    
    printf("Vi tri cua phan tu %d trong mang. ", search);
    for (int i=0; i<n; i++) 
	{
        if (arr[i]==search) 
		{
            printf("%d ", i + 1); 
            find = 1;
        }
    }
    
    if (!find) 
	{
        printf("Khong tim thay phan tu trong mang\n");
    } else 
	{
        printf("\n");
    }
    return 0;
}

