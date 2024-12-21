#include <stdio.h>

int main() 
{
    int n, count=1, so=2, soNto;

    printf("Nhap vao so nguyen n: "); scanf("%d", &n);

    printf("Cac so nguyen to dau tien la: ");
    
    while (count < n) 
    {
        soNto = 1; 
        for (int i=2; i*i<=so; i++) 
        {
            if (so%i==0) 
            {
           soNto = 0;  
              break;
            }
        }
        if (soNto) 
        {
            printf("%d ", so);
            count++;
        }
        so++;  
    }
    printf("\n");
    return 0;
}
