#include <stdio.h>

int main() 
{
    int m, n;
    printf("Nhap m: "); scanf("%d", &m);
 	printf("Nhap n: "); scanf("%d", &n);
	int matrix[m][n];
    int rows = m, cols = n; 
    int max = matrix[0][0]; 
	for (int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("Nhap [%d][%d]:", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
    for (int i=0; i<rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            if (matrix[i][j]>max) 
			{
                max = matrix[i][j];
            }
        }
    }
    printf("phan tu lon nhat trong mang la: %d\n", max);
    return 0;
}

