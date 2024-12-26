#include<stdio.h>
void tinhTong(int a, int b)
{
	printf("Ket qua tinh tong la: %d + %d = %d", a, b, a+b);
}
int main()
{
	int a, b;
	printf("nhap a:"); scanf("%d", &a);
	printf("nhap b:"); scanf("%d", &b);
	tinhTong(a, b);
	return 0;
}
