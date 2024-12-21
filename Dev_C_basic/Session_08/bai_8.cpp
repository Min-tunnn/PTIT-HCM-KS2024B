#include <stdio.h>

int main() 
{
    int m, n, sum;
    do
    {
    	printf("Nhap m: "); scanf("%d", &m);
    	printf("Nhap n: "); scanf("%d", &n);
	}while(m!=n);
    
    int matrix[m][n];
	for (int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("Nhap [%d][%d]:", i,j); scanf("%d", &matrix[i][j]);
		}
	}
    printf("cac phan tu dg cheo phu la: \n");
    for (int i=0; i<n; i++) 
	{
        printf("%d ", matrix[i][n-i-1]); 
        sum+=matrix[i][n-i-1]; 
    }

    printf("\ntong cac ptu dg cheo phu la: %d\n", sum);
    return 0;
}

