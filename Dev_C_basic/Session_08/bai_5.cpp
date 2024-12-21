#include <stdio.h>

int main() 
{
	int sum;
    int matrix[3][3] = 
	{
        {1, 3, 4},
        {5, 4, 8},
        {9, 3, 12},
    };
    int rows=3, cols=3; 
    for (int i=0; i<rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            if (i==0 || i==rows-1 || j==0 || j==cols-1) 
			{
                sum+=matrix[i][j];
            }
        }
    }

    printf("tong cac phan tu tren dg bien la: %d\n", sum);

    return 0;
}

