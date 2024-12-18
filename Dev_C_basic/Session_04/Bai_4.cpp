#include<stdio.h>
int main()
{
	int month, date;
	do
	{
		printf("Nhap thang: ");
		scanf("%d",  &month);
	}	
	while(month<1||month>12);
	if(month==1||month==3||month==7||month==5||month==8||month==10||month==12)	
	{
		date=31;
	}
	if(month==4||month==6||month==9||month==11)
	{
		date=30;
	}else
	{
		date=28;
	}
	printf("Co %d ngay.", date);
	return 0;
}
