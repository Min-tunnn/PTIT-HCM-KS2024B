#include <stdio.h>

int main() 
{
    int row, col;
    printf("nhap row: "); scanf("%d", &row);
    printf("nhap col: "); scanf("%d", &col);

    int matrix[row][col];

    printf("Nhap phan tu vao ma tran:\n");
    for (int i=0; i<row; i++) 
	{
        for (int j=0; j<col; j++) 
		{
            printf("[%d][%d]: ", i, j); scanf("%d", &matrix[i][j]);
        }
    }

    if (row!=col) 
	{
        printf("khong co duong cheo chinh!\n");
        return 0;
    }
    int diagonal[row];  
    for (int i=0; i<row; i++)  
	{
        diagonal[i] = matrix[i][i];
    }

    for (int i=0; i<row-1; i++) 
	{
        for (int j=0; j<row-1-i; j++) 
		{
            if (diagonal[j]>diagonal[j + 1]) 
			{
                int temp =diagonal[j];
                diagonal[j]= diagonal[j + 1];
                diagonal[j + 1]= temp;
            }
        }
    }

    for (int i=0; i<row; i++) 
	{
        matrix[i][i] = diagonal[i];
    }

    printf("sau khi sap xep duong cheo chinh:\n");
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

