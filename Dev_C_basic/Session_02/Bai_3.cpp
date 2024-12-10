#include<stdio.h>
#include<math.h>
/*Session_2 bai2*/
int main()
{
	int a, b;
	float correct;
	scanf("%d%d",&a ,&b);
	correct=a+b;
	printf("%d + %d = %.f\n", a, b, correct);
	correct=a-b;
	printf("%d - %d = %.f\n", a, b, correct);
	correct=a*b;
	printf("%d * %d = %.f\n", a, b, correct);
	correct=(float)a/b;
	printf("%d / %d = %.2f\n", a, b, correct);
	return 0;
}
