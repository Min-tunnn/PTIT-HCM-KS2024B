#include <stdio.h>

int main() 
{
    int n, m, matrix[100][100];

    printf("Nhap n: "); scanf("%d", &n);
    printf("Nhap m: "); scanf("%d", &m);

    printf("Nhap phan tu vao mang:\n");
    for (int i=0; i<n; i++) 
	{
        for (int j=0; j<m; j++) 
		{
            printf("[%d][%d]: ", i, j); scanf("%d", &matrix[i][j]);
        }
    }

    for (int j=0; j<m; j++) 
	{
        for (int i=0; i<n-1; i++) 
		{
            for (int k=0; k<n-1-i; k++) 
			{
                if (matrix[k][j]>matrix[k + 1][j]) 
				{
                    int temp = matrix[k][j];
                    matrix[k][j]= matrix[k + 1][j];
                    matrix[k+1][j]=temp;
                }
            }
        }
    }
    printf("sau khi sap  xep:\n");
    for (int i = 0; i<n; i++) 
	{
        for (int j = 0; j<m; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

