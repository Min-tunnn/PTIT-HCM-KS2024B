#include <stdio.h>
int main() 
{
    int n1, n2, temp;
    printf("Nhap (1): "); scanf("%d", &n1);
    printf("Nhap (2): "); scanf("%d", &n2);
    if (n1<=0||n2<=0) 
	{
        return 1;
    }
    int a=n1, b=n2;
    while (b!=0) 
	{
        int temp = b;
        b = a%b;
        a = temp;
    }
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", n1, n2, a);
    return 0;
}

