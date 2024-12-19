#include <stdio.h>
int main() 
{
    int n1, n2, a, b, bcnn;
    printf("Nhap n1: "); scanf("%d", &n1);
    printf("Nhap n2: "); scanf("%d", &n2);
    if (n1 <= 0 || n2 <= 0) {
        printf("Vui long nhap lai!!\n");
    } else {
        a = n1;
        b = n2;
        while(b!=0)
		{
            int temp=b;
            b=a%b;
            a=temp;
        }
        bcnn=(n1*n2)/a;
        printf("BCNN cua %d -> %d la: %d\n", n1, n2, bcnn);
    }
    return 0;
}

