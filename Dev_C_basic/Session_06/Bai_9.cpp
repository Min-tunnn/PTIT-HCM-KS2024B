#include<stdio.h>
#include<math.h>
int main()
{
	int ams, n, tong;
	again:
	printf("Nhap n: ");
	scanf("%d", &n);
	if (n>999||n<1) goto again;
	else ams=n;
	tong=pow((n/100), 3)+pow((n%100/10), 3)+pow((n%10), 3);
	if(tong==ams) printf("%d la so amstrong.", tong);
	else printf("Khong phai la so amstrong!");
	return 0;
}
	
	
	

