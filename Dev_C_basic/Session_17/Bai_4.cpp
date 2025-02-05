#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void nhapMang(int **arr, int *n) 
{
    printf("Nhap vao so phan tu: ");
    scanf("%d", n);
    *arr = (int*)malloc((*n)*sizeof(int));
    printf("Nhap %d phan tu:", *n);
    for (int i=0; i<*n; i++) 
	{
        scanf("%d", (*arr)+i);
    }
}

void inSoChan(int *arr, int n) 
{
    printf("Cac so chan trong mang: ");
    for (int i=0; i<n; i++) 
	{
        if (arr[i]%2==0) 
		{
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

bool laSoNguyenTo(int num) 
{
    if (num<2) return false;
    for (int i=2; i*i<=num; i++) 
	{
        if (num%i==0) return false;
    }
    return true;
}

void inSoNguyenTo(int *arr, int n) 
{
    printf("Cac so nguyen to trong mang: ");
    for (int i=0; i<n; i++) 
	{
        if (laSoNguyenTo(arr[i])) 
		{
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void daoNguocMang(int *arr, int n) 
{
    printf("Mang sau khi dao nguoc: ");
    for (int i=n-1; i>=0; i--) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sapXepMang(int *arr, int n, bool tangDan) 
{
    for (int i=0; i<n-1; i++) 
	{
        for (int j=i+1; j<n; j++) 
		{
            if ((tangDan&&arr[i]>arr[j])||(!tangDan&&arr[i]<arr[j])) 
			{
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (int i=0; i<n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void timKiemPhanTu(int *arr, int n) 
{
    int x, found = 0;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    for (int i=0; i<n; i++) 
	{
        if (arr[i]==x) 
		{
            printf("Phan tu %d xuat hien o vi tri %d\n", x, i);
            found = 1;
        }
    }
    if (!found) printf("Phan tu ko tim thay\n");
}

int main() 
{
    int *arr=NULL, n=0, choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap sl phan tu, gia tri cac phan tu\n");
        printf("2. In ra cac phan tu so chan\n");
        printf("3. In ra cac phan tu so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("   5.1 Tang dan\n");
        printf("   5.2 Giam dan\n");
        printf("6. Nhap vao phan tu can tim trong mang\n");
        printf("7. Thhoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                nhapMang(&arr, &n);
                break;
            case 2:
                inSoChan(arr, n);
                break;
            case 3:
                inSoNguyenTo(arr, n);
                break;
            case 4:
                daoNguocMang(arr, n);
                break;
            case 5:
                printf("Chon  kieu sap xep(1. Tang or 2. Giam): ");
                int order;
                scanf("%d", &order);
                sapXepMang(arr, n, order == 1);
                break;
            case 6:
                timKiemPhanTu(arr, n);
                break;
            case 7:
                printf("Thoat ctrinh.\n");
                break;
            default:
                printf("Vui long lua chon (1-7)!\n");
        }
    } while (choice!=7);

    free(arr);
    return 0;
}

