#include<stdio.h>
#include<math.h>
int main()
{
	float r, chuVi, dienTich;
	printf("Nhap  ban kinh: ");
	scanf("%f", &r);
	chuVi=2*PI*r;
	printf("Chu vi hinh tron la: %.2f\n", chuVi);
	dienTich=pow(chuVi, 2)/(4*PI);
	printf("Dien tich hinh tron la: %.2f", dienTich);
	return 0;
}
