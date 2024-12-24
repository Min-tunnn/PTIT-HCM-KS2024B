#include <stdio.h>

int main() 
{
    int n, m, matrix[100][100];

    printf("Nhap (m): "); scanf("%d", &m);
    printf("Nhap (n): "); scanf("%d", &n);

    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i=0; i<m; i++) 
	{
        for (int j=0; j<n; j++) 
		{
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i=0; i<m; i++) 
	{ 
        for (int j=0; j<n-1; j++) 
		{
            for (int k=0; k<n-1-j; k++) 
			{
                if (matrix[i][k]>matrix[i][k + 1]) 
				{
                    int temp=matrix[i][k];
                    matrix[i][k] = matrix[i][k+1];
                    matrix[i][k+1] = temp;
                }
            }
        }
    }

    printf("Ma tran sau khi sap xep hang:\n");
    for (int i=0; i<m; i++) 
	{
        for (int j=0; j<n; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

