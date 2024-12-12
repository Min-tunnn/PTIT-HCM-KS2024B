#include<stdio.h>
#include<math.h>

int main()
{
	int time, money, pCap;
	printf("So gio lm viec: ");
	scanf("%d", &time);
	printf("muc luong: ");
	scanf("%d", &money);
	if(time>160)
	{
		printf("duoc nhan them phu cap: \n");
		pCap=(money*time/100)*10;
	}
	else
	{
		int pCap=0;
	}
	printf("Tong luong: %.fvnd", (float)pCap+(money*time));
	
}
