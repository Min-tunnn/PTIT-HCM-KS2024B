#include<stdio.h>
int main()
{
	int m, n, search;
	printf("Nhap m: "); scanf("%d", &m);
	printf("Nhap n: "); scanf("%d", &n);
	int matrix[m][n];
	for (int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("Nhap [%d][%d]:", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("Nhap so can tim: "); scanf("%d", &search);
	for (int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(matrix[i][j]==search)
			{
				printf("vi tri phan tu trong mang la: [%d] [%d].", i, j);
				return 0;
			}
			else
			{
				printf("Phan tu khong tim thay trong mang!!");
				return 0;
			}
		}
	}
	
}
