#include <stdio.h>
int main() 
{
    int n;
    printf("Nhap n ktra uoc so: "); scanf("%d", &n);
    if (n == 0) 
    {
        printf("So 0 khong co uoc.\n");
    } 
    else 
    {
        printf("Cac uoc cua %d la: ", n);
        for (int i=1; i<=n; i++) 
        {
            if (n%i ==0) printf("%d ", i);
            else printf("\n");
        }
    }
    return 0;
}
