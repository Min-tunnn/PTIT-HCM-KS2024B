#include<stdio.h>
int main()
{
	int date, month, year;
	do
	{
	printf("Nhap ngay: "); scanf("%d", &date);
	printf("Nhap thang: "); scanf("%d", &month);
	printf("Nhap nam: "); scanf("%d", &year);	
	}while(date<1||date>31||month<1||month>12||year<1);
	if(year%4==0)
	{
		if(month==2)
		{
			if(date>=1&&date<=29) printf("Ngay, thang, nam dung.");
			else printf("Ngay thang nam nhap sai!!!");
			
		}else if(month==1||month==3||month==7||month==5||month==8||month==10||month==12)
		{
			if(date>=1&&date<=31) printf("Ngay, thang, nam dung.");
			else printf("Ngay thang nam nhap sai!!!");
			
		}else if(month==4||month==6||month==9||month==11)
		{
			if (date>=1&&date<=30) printf("Ngay, thang, nam dung");
			 else printf("Ngay thang nam nhap sai!!!");
		}
	
	}
	else
	{
		if(month==2)
		{
			if(date>=1&&date<=28) printf("Ngay, thang, nam dung.");
			else printf("Ngay thang nam nhap sai!!!");
			
		}else if(month==1||month==3||month==7||month==5||month==8||month==10||month==12)
		{
			if(date>=1&&date<=31) printf("Ngay, thang, nam dung.");
			else printf("Ngay thang nam nhap sai!!!");
			
		}else if(month==4||month==6||month==9||month==11)
		{
			if (date>=1&&date<=30) printf("Ngay, thang, nam dung");
			else printf("Ngay thang nam nhap sai!!!");
		}
	}

}
