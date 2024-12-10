#include<stdio.h>
int main()
{
	float a, b, chuVi, dienTich;
	printf("Nhap chieu dai: ");
	scanf("%f", &a);
	printf("Nhap chieu rong: ");
	scanf("%f", &b);
	printf("chu vi: %.2f", (a+b)*2);
	printf("Dien tich: %.2f", a*b);
}
