#include<stdio.h>
#include<math.h>

int main()
{
	int selct, arr[3], n;
	again:
	printf("-------------------------\n");
	printf("-1. nhap 3 so           -\n");
	printf("-2. tong 3 so           -\n");
	printf("-3. trung binh cong 3 so-\n");
	printf("-4. Tim so nho nhat     -\n");
	printf("-5. Tim so lon nhat     -\n");
	printf("-6. Thoat               -\n");
	printf("-------------------------\n");	
	printf("choose: ");
	scanf("%d", &selct);
	switch (selct)
	{
		case 1:
			{
				input_arr:
				printf("Vui long nhap  3 so: \n");
				for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
				{
					printf("arr[%d]=", i);;
					scanf("%d", &arr[i]);
				}
				goto again;
				break;
			}
		case 2:
			{
				long long tong=0;
			
				for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
				{
					tong+=arr[i];
				}
				printf("Tong 3 so = %d\n", tong);
				goto again;
				break;
			}
		case 3:
			{
				long long tong=0;
				for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
				{
					tong+=arr[i];
				}
				printf("Trung binh cong 3 so: %d\n", tong/3);
				goto again;
				break;
			}
		case 4:
			{
				int max; 
				for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
				{
					for (int j=i+1; j<sizeof(arr)/sizeof(arr[0]); j++)
					{
						if (arr[i]>=arr[j])
						{
							max=arr[i];
						}else
						{
							max=arr[j];
						}
					}
				}
				printf("max: %d", max);
				goto again;
				break;
			}
		case 5:
			{
				int min;
				for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
				{
					for(int j=i+1; j<sizeof(arr)/sizeof(arr[0]); j++)
					{
						if(arr[i]<=arr[j])
						{
							min=arr[i];
						}
						else
						{
							min=arr[j];
						}
					}
				}
				printf("so nho nhat trong 3 so: %d\n", min);
				goto again;
				break;
			}
		case 6:
			{
				break;	
			}
	}
	return 0;
}
