#include <stdio.h>

int main() 
{
    int row, col;


    printf("Nhap so dong (row): "); scanf("%d", &row);
    printf("Nhap so cot (col): "); scanf("%d", &col);


    int matrix[row][col];

    printf("Nhap phan tu vao mang:\n");
    for (int i=0; i<row; i++) 
	{
        for (int j=0; j<col; j++) 
		{
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    if (row!=col) 
	{
        printf("khong co duong cheo phu!\n");
        return 0;
    }

    int diagonalSecondary[row];  
    for (int i=0; i<row; i++) 
	{
        diagonalSecondary[i] = matrix[i][col - i - 1];
    }

    for (int i=0; i<row-1; i++) 
	{
        for (int j=0; j<row-1-i; j++) 
		{
            if (diagonalSecondary[j]< diagonalSecondary[j + 1]) 
			{
                int temp = diagonalSecondary[j];
                diagonalSecondary[j] = diagonalSecondary[j + 1];
                diagonalSecondary[j+1] = temp;
            }
        }
    }

    for (int i=0; i<row; i++) 
	{
        matrix[i][col-i-1] =diagonalSecondary[i];
    }

    printf("sau khi sap xep duong cheo phu:\n");
    for (int i=0; i<row; i++) 
	{
        for (int j=0; j<col; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

