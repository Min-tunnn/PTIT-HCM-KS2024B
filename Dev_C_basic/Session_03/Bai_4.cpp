#include<stdio.h>

void input(float &toan, float &van, float &anh)
{
	printf("Nhap diem toan: ");
	scanf("%f", &toan);
	printf("Nhap diem van: ");
	scanf("%f", &van);
	printf("Nhap diem anh: ");
	scanf("%f", &anh);
}
int main()
{
	float toan, van, anh;
	input(toan, van, anh);
	printf("tong diem trung binh 3 mon la: %.2f", (toan+van+anh)/3);
	return 0;
}
