#include<stdio.h>
int main()
{
    int n, lc, matrix[10][10] = {0};
    printf("Nhap so muon thay: "); 
    scanf("%d", &n);
    printf("Vi tri muon thay the (1-100): "); 
    scanf("%d", &lc);
    if (lc<1 || lc>100) 
	{
        printf("Vi tri khong hop le!!.\n");
        return 1;
    }
    int row=(lc-1)/10;
    int col=(lc-1)%10;
    matrix[row][col] = n;

    for (int i=0; i<10; i++) 
	{
        for (int j=0; j<10; j++)
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

