#include <stdio.h>

int main() {
    int n;
	int value=1;
    printf("nhap 1 so nguyen duong: ");
    scanf("%d", &n);
	int matrix[n][n];
    
    for (int i=0; i<n; i++) 
	{
        for (int j=0; j<n; j++) 
		{
            matrix[i][j] = value++;
        }
    }
    printf("Ma tran vuông:\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) 
		{
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

