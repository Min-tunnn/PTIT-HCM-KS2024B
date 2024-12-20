#include<stdio.h>
int main()
{
	int m, n;
	printf("Nhap m: "); scanf("%d", &m);
	printf("Nhap n: "); scanf("%d", &n);
	int matrix[m][n];
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("[%d][%d]:", i, j); scanf("%d", &matrix[i][j]);
		}
	}
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("%d ", matrix[i][j]);
		}
	}
	return 0;
}
