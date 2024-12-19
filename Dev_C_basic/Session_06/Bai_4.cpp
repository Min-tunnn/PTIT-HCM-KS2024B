#include <stdio.h>
#include <math.h> 
int main() {
    double a, b, c, delta, x1, x2; 
    printf("ptrinh bac 2: ax^2 + bx + c = 0\n");
    printf("Nhap a: "); scanf("%lf", &a);
    printf("Nhap b: "); scanf("%lf", &b);
    printf("Nhap c: "); scanf("%lf", &c);
    if(a==0) 
	{
        if(b==0) 
		{
            if(c==0) printf("Phuong trinh vo so nghiem.");
			else printf("Phuong trinh vo nghiem.");   
        } 
		else 
		{
            x1=-c/b;
            printf("Ptrinh co 1 ng: x = %.2lf\n", x1);
        }
    } 
	else 
	{
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } 
		else if(delta==0) 
		{
            x1=-b/(2* a);
            printf("Ptrinh co ng kep (x1)(x2): %.2lf\n", x1);
        } 
		else 
		{
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("phtrinh co 2 ng phan biet:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        }
    }

    return 0;
}

