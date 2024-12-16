#include<stdio.h>

int main()
{
	int a, b, n;
	again:
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("---CALCULATION---\n");
	printf("-2. Tong 2 so   -\n");
	printf("-3. Hieu 2 so   -\n");
	printf("-3. Tich 2 so   -\n");
	printf("-4. Thuong 2 so -\n");
	printf("-5. Thoat       -\n");
	printf("-----------------\n");
	do{
	printf("Choose:");
	scanf("%d", &n);	
	}while (n<1||n>5);
	switch (n)
	{
	case 1:
			{
				printf("tong 2 so: %d + %d = %d\n\n", a, b, a+b);
				goto again;
				break;
			}
		case 2:
			{
				printf("hieu 2 so: %d - %d = %d\n\n", a, b, a-b);
				goto again;
				break;
			}
		case 3:
			{
				printf("thuong 2 so: %d + %d = %d\n\n", a, b, a*b);
				goto again;
				break;
			}
		case 4:
			{
				printf("tich 2 so: %d / %d = %d\n\n", a, b, a/b);
				goto again;
				break;
			}
		case 5:
			{
				return 0;
			}
	}
}
