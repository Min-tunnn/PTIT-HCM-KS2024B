#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() 
{
    int arr[100], n = 0, choice;
menu:
    printf("\nMENU\n");
    printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
    printf("2. In ra gia tri cac phan tu dang quan ly\n");
    printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
    printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
    printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
    printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
    printf("7. Them mot phan tu vao vi tri chi dinh\n");
    printf("8. Thoat\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);

    switch (choice) 
	{
        case 1: 
		{
            printf("Nhap so phan tu cua mang: ");
            scanf("%d", &n);
            printf("Nhap gia tri cac phan tu:\n");
            for (int i=0; i<n; i++) 
			{
                printf("Phan tu [%d]: ", i+1);
                scanf("%d", &arr[i]);
            }
            goto menu;
            break;
        }
        case 2: 
		{
            printf("Cac phan tu dang quan ly:\n");
            for (int i=0; i<n; i++) 
			{
                printf("%d ", arr[i]);
            }
            printf("\n");
            goto menu;
            break;
        }
        case 3: 
		{
            int sum = 0;
            printf("Cac phan tu chan:\n");
            for (int i=0; i<n; i++) 
			{
                if (arr[i]%2== 0) 
				{
                    printf("%d ", arr[i]);
                    sum+=arr[i];
                }
            }
            printf("\nTong cac phan tu chan: %d\n", sum);
            goto menu;
            break;
        }
        case 4: 
		{
            if (n == 0) 
			{
                printf("Mang rong!\n");
            } else 
			{
                int max=arr[0], min = arr[0];
                for (int i = 1; i<n; i++) 
				{
                    if (arr[i]>max) max=arr[i];
                    if (arr[i]<min) min=arr[i];
                }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
            }
            goto menu;
            break;
        }
        case 5: 
		{
            int sum = 0;
            printf("Cac phan tu la so nguyen to:\n");
            for (int i=0; i<n; i++) 
			{
                bool soNto = true;
                if (arr[i]<2) soNto = false;
                for (int j=2; j*j<=arr[i]; j++) 
				{
                    if (arr[i]%j == 0) 
					{
                        soNto = false;
                        break;
                    }
                }
                if (soNto) 
				{
                    printf("%d ", arr[i]);
                    sum += arr[i];
                }
            }
            printf("\nTong cac so nguyen to: %d\n", sum);
            goto menu;
            break;
        }
        case 6: 
		{
            int num, count = 0;
            printf("Nhap mot so: ");
            scanf("%d", &num);
            for (int i=0; i<n; i++) 
			{
                if (arr[i]==num) count++;
            }
            printf("So %d xuat hien %d lan trong mang.\n", num, count);
            goto menu;
            break;
        }
        case 7: 
		{
            int value, position;
            printf("Nhap gia tri can them: ");
            scanf("%d", &value);
            printf("Nhap vi tri can them (0-based index): ");
            scanf("%d", &position);
            if (position<0 || position>n) 
			{
                printf("Vi tri khong hop le!\n");
            } else 
			{
                for (int i=n; i>position; i--) 
				{
                    arr[i]=arr[i-1];
                }
                arr[position] = value;
                n++;
                printf("Mang sau khi them phan tu:\n");
                for (int i=0; i<n; i++) 
				{
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            goto menu;
            break;
        }
        case 8: 
		{
            printf("Ket thuc chuong trinh!\n");
            break;
        }
        default: 
		{
            printf("Lua chon khong hop le! Vui long chon lai.\n");
            goto menu;
            break;
        }
    }

    return 0;
}

