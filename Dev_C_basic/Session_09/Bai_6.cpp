#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int matrix[100][100];
    int m = 0, n = 0, choice;

menu:
    printf("\n===========================MENU===========================\n");
    printf("=1. Nhap kich co va gia tri cac phan tu cua mang         =\n");
    printf("=2. In gia tri cac phan tu cua mang theo ma tran         =\n");
    printf("=3. In gia tri cac phan tu la le va tinh tong            =\n");
    printf("=4. In ra cac phan tu nam tren duong bien va tinh tich   =\n");
    printf("=5. In ra cac phan tu nam tren duong cheo chinh          =\n");
    printf("=6. In ra cac phan tu nam tren duong cheo phu            =\n");
    printf("=7. In ra dong co tong gia tri cac phan tu la lon nhat   =\n");
    printf("=8. Thoat                                                =\n");
    printf("==========================================================\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);

    switch (choice) 
	{
        case 1: 
		{
            printf("Nhap so hang (m): ");scanf("%d", &m);
            printf("Nhap so cot (n): ");scanf("%d", &n);
			printf("Nhap gia tri cac phan tu:\n");
            for (int i=0; i<m; i++) 
			{
                for (int j=0; j<n; j++) 
				{
                    printf("[%d][%d]: ", i, j);
                    scanf("%d", &matrix[i][j]);
                }
            }
            goto menu;
            break;
        }
        case 2: 
		{
            printf("Ma tran:\n");
            for (int i=0; i<m; i++) 
			{
                for (int j=0; j<n; j++) 
				{
                    printf("%d ", matrix[i][j]);
                }
                printf("\n");
            }
            goto menu;
            break;
        }
        case 3: 
		{
            int sum=0;
            printf("Cac phan tu le:\n");
            for (int i=0; i<m; i++) 
			{
                for (int j=0; j<n; j++) 
				{
                    if (matrix[i][j]%2!= 0) 
					{
                        printf("%d ", matrix[i][j]);
                        sum += matrix[i][j];
                    }
                }
            }
            printf("\nTong cac phan tu le: %d\n", sum);
            goto menu;
            break;
        }
        case 4: 
		{
            long long product = 1;
            printf("Cac phan tu tren duong bien:\n");
            for (int i=0; i<m; i++) 
			{
                for (int j=0; j<n; j++) 
				{
                    if (i==0 || i==m-1 || j==0 || j==n-1) 
					{
                        printf("%d ", matrix[i][j]);
                        product *= matrix[i][j];
                    }
                }
            }
            printf("\nTich cac phan tu tren duong bien: %lld\n", product);
            goto menu;
            break;
        }
        case 5: 
		{
            if (m!=n) 
			{
                printf("Ma tran khong phai vuong, khong co duong cheo chinh!\n");
            } else {
                printf("Cac phan tu tren duong cheo chinh:\n");
                for (int i=0; i<m; i++) 
				{
                    printf("%d ", matrix[i][i]);
                }
                printf("\n");
            }
            goto menu;
            break;
        }
        case 6: 
		{
            if (m != n) 
			{
                printf("Ma tran khong phai vuong, khong co duong cheo phu!\n");
            } else {
                printf("Cac phan tu tren duong cheo phu:\n");
                for (int i=0; i<m; i++) 
				{
                    printf("%d ", matrix[i][n-1-i]);
                }
                printf("\n");
            }
            goto menu;
            break;
        }
        case 7: 
		{
            int maxRow=0, maxSum=0;
            for (int i=0; i<m; i++) 
			{
                int rowSum = 0;
                for (int j=0; j<n; j++) 
				{
                    rowSum+=matrix[i][j];
                }
                if (rowSum>maxSum) 
				{
                    maxSum=rowSum;
                    maxRow=i;
                }
            }

            printf("Dong co tong gia tri lon nhat la dong %d: ", maxRow+1);
            for (int j=0; j<n; j++) 
			{
                printf("%d ", matrix[maxRow][j]);
            }
            printf("\nTong: %d\n", maxSum);
            goto menu;
            break;
        }
        case 8: {
            printf("Ket thuc chuong trinh!\n");
            break;
        }
    }
    return 0;
}

