#include <stdio.h>
#include <stdlib.h>

void nhapMang(int **arr, int *n)
{
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);
    *arr=(int*)malloc((*n) * sizeof(int));
    
    if (*arr==NULL) 
    {
        printf("Khong the chinh sua!\n");
        exit(1);
    }

    for (int i=0; i<*n; i++) 
    {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", (*arr)+i);
    }
}

void hienThiMang(int *arr, int n) 
{
    printf("Cac phan tu trong mang: ");
    for (int i=0; i<n; i++) 
    {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}

int tinhDoDaiMang(int *arr, int n) 
{
    return n;
}

int tinhTongMang(int *arr, int n) 
{
    int sum = 0;
    for (int i=0; i<n; i++) 
    {
        sum+=*(arr+i);
    }
    return sum;
}

int timMax(int *arr, int n) 
{
    int max=*arr;
    for (int i=1; i<n; i++) 
    {
        if (*(arr+i)>max) 
        {
            max=*(arr + i);
        }
    }
    return max;
}

int main() {
    int *arr=NULL;
    int n=0;
    int choice;
    
    do {
        printf("\nMENU\n");
        printf("1. Nhap sl phan tu va cac phan tu: \n");
        printf("2. Hien thi cac phan tu\n");
        printf("3. Tinh do dai arr\n");
        printf("4. Tinh tong cac phan tu trong mang.\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                nhapMang(&arr, &n);
                break;
            case 2:
                if (arr != NULL) hienThiMang(arr, n);
                else printf("Chua co du lieu!\n");
                break;
            case 3:
                printf("Do dai cua mang la: %d\n", tinhDoDaiMang(arr, n));
                break;
            case 4:
                printf("Tong cac phan tu la: %d\n", tinhTongMang(arr, n));
                break;
            case 5:
                printf("Phan tu lon nhat: %d\n", timMax(arr, n));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Vui long nhap l?i lua chon (1-6)!\n");
        }
    } while (choice != 6);
    free(arr);
    return 0;
}

