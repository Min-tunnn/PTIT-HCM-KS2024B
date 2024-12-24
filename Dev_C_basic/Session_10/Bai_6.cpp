#include <stdio.h>
int main() 
{
    int n, arr[100], target, positions[100], count = 0;

    printf("Nhap so phan tu cua mang: "); scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i=0; i<n; i++) 
	{
        printf("[%d]: ", i); scanf("%d", &arr[i]);
    }

    printf("Nhap so nguyen can tim: "); scanf("%d", &target);

    for (int i=0; i<n; i++) 
	{
        if (arr[i] == target) 
		{
            positions[count++] = i;
        }
    }

    if (count>0) 
	{
        printf("Phan tu %d duoc tim thay tai vi tri: ", target);
        for (int i=0; i<count; i++) 
		{
            printf("%d ", positions[i]);
        }
        printf("\n");
    } 
	else 
	{
        printf("Phan tu khong ton tai !!.\n", target);
    }

    return 0;
}

