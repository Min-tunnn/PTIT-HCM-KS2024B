#include <stdio.h>
#include <math.h>

int main() {
    int n, count=0, number=2;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("%d so nguyen to dau tien la: ", n);

    while (count<n) { 
        int nto=1; 
        
        for (int i=2; i<=sqrt(number); i++) 
		{ 
            if (number%i==0) { 
                nto=0; 
                break;
            }
        }
        
        if (nto) 
		{ 
            printf("%d ", number); 
            count++; 
        }
        number++; 
    }

    return 0;
}

