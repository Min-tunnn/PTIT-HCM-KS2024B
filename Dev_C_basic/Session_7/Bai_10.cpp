#include <stdio.h>
int main() 
{
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap vao %d phan tu trong mang:\n", n);
    for (int i=0; i<n; i++) 
    {
        printf("Phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Cac so nguyen to trong mang la: ");
    for (int i=0; i<n; i++) 
    {
        int soNto=1;

        if (arr[i]<=1) 
        {
            soNto=0; 
        } 
        else 
        {
            for (int j=2; j*j<=arr[i]; j++) 
            {
                if (arr[i]%j==0) 
                {
                    soNto=0; 
                    break;
                }
            }
        }

        if (soNto) 
        {
            printf("%d ", arr[i]); 
        }
    }
    printf("\n");

    return 0;
}
