#include <stdio.h>
void kiem_tra_so_hoan_hao(int n) 
{
    int tong = 0;
    for (int i=1; i<n; i++) 
	{
        if (n%i==0) 
		{
            tong+=i;
        }
	}
    if (tong == n) 
	{
        printf("%d La so hoan hao\n", n);
    } else 
	{
        printf("%d Khong phai la so hoan hao.\n", n);
    }
}

int main() 
{
    int so_1, so_2;
    printf("Nhap so thu 1: "); scanf("%d", &so_1);
    printf("Nhap so thu 2: "); scanf("%d", &so_2);
    kiem_tra_so_hoan_hao(so_1);
    kiem_tra_so_hoan_hao(so_2);

    return 0;
}

