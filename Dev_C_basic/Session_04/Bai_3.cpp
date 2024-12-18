#include<stdio.h>
int main()
{
	int n;
	printf("Kiem tra so chan hay le: ");
	scanf("%d", &n);
	if(n%3==0||n%5==0&&n%3==0)
	{
		printf("%d la chia het cho 3 va 5.", n);
	}else
	{
		printf("%d khong chia chia het cho 3 va 5.", n);
	}
	
	return 0;
}
