#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Vui long nhap 4 chu so: ");
	scanf("%d", &n);
	printf("%d", (n/1000)+(n%1000/100)+(n%100/10)+(n%10));
	//
	//...++(n%10)
}
