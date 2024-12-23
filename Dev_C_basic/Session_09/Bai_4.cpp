#include<stdio.h>
#include<stdlib.h>
#define max 100
int main()
{
	int arr[max], n, choose, slots=0;
	again:
	printf("|================MENU================|\n");
	printf("|1. Nhap vao mang                    |\n");
	printf("|2. Xem mang                         |\n");
	printf("|3. Them mang                        |\n");
	printf("|4. Sua phan tu trong mang           |\n");
	printf("|5. Xoa mang                         |\n");
	printf("|6. Thoat                            |\n");
	printf("|====================================|\n");
	printf("Lua chon: "); scanf("%d", &choose);
	switch(choose)
	{
		case 1:
			{
				printf("*** Nhap Vao Mang ***\n");
				do
				{
					printf("Nhap vao so phan tu muon nhap (0-%d): ", max); scanf("%d", &n);
					slots=n;
				}while(n<0||n>100);
				for(int i=0; i<n; i++)
				{
					printf("Nhap [%d]: ", i); scanf("%d", &arr[i]);
				}
				printf("Success!!\n");
				goto again;
				break;
			}
		case 2:
			{
				printf("*** Hien thi mang ***\n");
				for (int i=0; i<n; i++)
				{
					printf("[%d]: %d\n", i, arr[i]);
				}
				goto again;
				break;		
			}
		case 3:// them ptu vao mang
			{
				printf("*** Them phan tu vao mang ***\n");
				if (slots>=max)
				{
					printf("Mang fully phan tu!!!");
					goto again;
				}
				else
				{
					int giatri;
					printf("Nhap  gia tri: "); scanf("%d", &giatri);
					arr[slots++]=giatri;
					printf("Success!!!\n");
				}
				goto again;
				break;
			}
		case 4:
			{
				printf("*** Sua phan tu trong mang ***\n");
				if (slots == 0) 
				{
                    printf("Mang trong, vui long nhap du lieu truoc!\n");
                } else {
                    int pos, giatri2;
                    printf("Nhap vi tri can sua (tu 0 den %d): ", slots-1);
                    scanf("%d", &pos);
                    if (pos < 0 || pos >= slots) 
					{
                        printf("Vi tri khong hop le!\n");
                    } else {
                        printf("Nhap gia tri moi: "); scanf("%d", &giatri2);
                        arr[pos] = giatri2;
                        printf("Success!!\n");
                    }
                }
                goto again;
                break;
			}
		case 5:
			{
				printf("*** Xoa phan tu trong mang ***\n");
				if (slots == 0) 
				{
                    printf("Mang trong, vui long nhap du lieu truoc!\n");
                } else {
                    int pos;
                    printf("Nhap vi tri can xoa (tu 0 den %d): ", slots-1);
                    scanf("%d", &pos);
                    if (pos<0 || pos>=slots) 
					{
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = pos; i < slots- 1; i++) 
						{
                            arr[i] = arr[i + 1];
                        }
                        slots--;
                        printf("Da xoa phan tu thanh cong!\n");
                    }
                }
                goto again;
				break;
			}
		case 6:
			{
				printf("*** Thoat Chuong Trinh ***\n");
				return 0;
			}
			
			default:
				printf("vui long chon lai!!!\n");
				goto again;
	}
}
