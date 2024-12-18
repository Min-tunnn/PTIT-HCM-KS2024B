#include<stdio.h>
int main()
{
	int n;
	printf("Nhap tong so dien dung(kwh): ");
	scanf("%d", &n);
	if(0<=n&n<50)
	{
		n*=10000;
	}else if(50<=n&&n<100)
	{
		n*=15000;
	}else if(100<=n&&n<150)
	{
		n*=20000;
	}else if(150<=n&&n<200)
	{
		n*=25000;
	}else
	{
		n*=30000;
	}
	printf("tong so tien can phai thanh toan: %d",n);
}
