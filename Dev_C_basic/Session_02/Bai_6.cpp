#include<stdio.h>
#include<math.h>// dung thu vien math.h de lay pow
//PI la so co that la nguyen tac luon dung nen dat PI ko thay doi
float PI=3.14159265358979323846264338327950288419716939937510582097494459230;
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
