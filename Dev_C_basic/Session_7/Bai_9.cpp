#include <stdio.h>

int main() {
    int m, n;

    printf("Nhap vao so hang (m): ");
    scanf("%d", &m);
    printf("Nhap vao so cot (n): ");
    scanf("%d", &n);

    int arr[m * n];

    printf("Nhap vao cac phan tu cua ma tran:\n");
    for (int i=0; i<m; i++) 
    {
        for (int j=0; j<n; j++) 
        {
            int index=i*n+j;  
            printf("Phan tu arr[%d][%d]:", i, j);
            scanf("%d", &arr[index]);
        }
    }
    printf("Cac phan tu nma tren duong bien cua ma tran la: ");
    for (int j=0; j<n; j++) 
    {
        printf("%d ", arr[j]);
    }
    for (int i=1; i<m-1; i++) 
    {
        printf("%d ", arr[i*n+n-1]);
    }
    if (m>1) 
    {
        for (int j=n-1; j>=0; j--) 
        {
            printf("%d ", arr[(m-1)*n+j]);
        }
    }
    if (n>1) 
    {
        for (int i=m-2; i>=1; i--) 
        {
            printf("%d ", arr[i*n]);
        }
    }
    printf("\n");
    return 0;
}
