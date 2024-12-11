#include<stdio.h>

int main()
{
	float c, f;
	printf("nhiet do Celsius: ");
	scanf("%f", &c);
	f=(c*9)/5+32;
	printf("sau khi chuyen sang do F= %.2f", f);
	return 0;
}
