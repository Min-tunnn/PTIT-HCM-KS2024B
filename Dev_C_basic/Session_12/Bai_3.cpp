#include<stdio.h>
void Factorial(int n)
{
	int kq=1;
	for(int i=1; i<=n; i++)
	{
		kq*=i;
	}
	printf("Giai thua la: %d", kq);
}
int main()
{
	int n;
	printf("Nhap so nguyen duong: "); scanf("%d", &n);
	Factorial(n);
}
