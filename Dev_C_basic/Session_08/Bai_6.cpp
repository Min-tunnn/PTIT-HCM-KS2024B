#include <stdio.h>
int main() 
{
    int sum=0, n=4;
    int matrix[4][4] = 
	{
        {11, 1, 7, 4},
        {4, 3, 13, 8},
        {9, 13, 17, 19},
        {19, 24, 5, 32}
    };
    printf("cac ptu tren dg cheo chinh: ");
    for (int i=0; i<n; i++) 
	{
        printf("%d ", matrix[i][i]);
        sum+=matrix[i][i];
    }

    printf("\ntong cac phan tu tren duong cheo chinh: %d\n", sum);
    return 0;
}

