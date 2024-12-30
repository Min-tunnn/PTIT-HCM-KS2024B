#include<stdio.h>
#define max 100
bool InputMatrix(int m, int n, int matrix[max][max])
{
	if(m==n)
	{
		for (int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				scanf("%d", &matrix[i][j]);
				
			}
		}
		return true;
	}
	else
	{
		printf("Nhap ma tran that bai!!!\n");
		return false;
	}
	
	
}
int main()
{
	int m, n, matrix[max][max];
	printf("Nhap hang: "); scanf("%d", &m);
	printf("Nhap dong: "); scanf("%d", &n);
	if(InputMatrix(m, n, matrix))
	{
		for (int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				printf("%d ", matrix[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		return 0;
	}
	return 0;
}
