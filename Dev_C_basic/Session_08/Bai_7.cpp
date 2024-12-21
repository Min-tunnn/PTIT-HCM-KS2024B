#include <stdio.h>

int main() 
{
    int m, n;
    do{
    printf("nhap m: "); scanf("%d", &m);
    printf("nhap n: "); scanf("%d", &n);
	}while (m!=n);
	int matrix[m][n];
	for (int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("Nhap [%d][%d]:", i, j); scanf("%d", &matrix[i][j]);
		}
	}
    int sum = 0; 
	
    printf("Các phan tu tren dg cheo chinh: ");//vua in ra vua tinh tong
    for (int i = 0; i<n || i<m; i++) 
	{
        printf("%d ", matrix[i][i]); 
        sum+=matrix[i][i]; 
    }

    printf("\ntong cac phan tu tren duong cheo chinh: %d\n", sum);

    return 0;
}

