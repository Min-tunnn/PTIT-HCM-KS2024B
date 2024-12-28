#include<stdio.h>
#define max 100
int main()
{
	int choose, n, arr[max], check=0;
	menu:
	printf("==========================MENU==========================\n");
	printf("|1.  Nhap so phan tu va gia tri cho mang.              |\n");//1. done
	printf("|2.  In ra cac phan tu trong mang.                     |\n");//2. done
	printf("|3.  Dem so luong cac so nguyen to co trong mang.      |\n");
	printf("|4.  Tim gia tri lon thu 2 trong mang.                 |\n");//4. working...
	printf("|5.  Them 1 phan tu vao vi tri ngau nhien trong mang.  |\n");//5. done
	printf("|6.  Xoa phan tu  tai mot vi tri cu the.               |\n");//6. done
	printf("|7.  Sap xep theo thu tu giam dan (insertion sort).    |\n");//7. done
	printf("|8.  Tim kiem phan tu trong mang (Binary search).      |\n");//8. done
	printf("|9.  Xoa cac phan tu trung lap trong mang.             |\n");
	printf("|10. Dao nguoc cac phan co trong mang.                 |\n");//10. done
	printf("========================================================\n");
	printf("Choose: "); scanf("%d", &choose);
	switch (choose)
	{
		case 1:
				{
					check=1;
					printf("Nhap so luong phan tu trong mang:"); scanf("%d", &n);
					arr[n];
					for(int i=0; i<n; i++)
					{
						printf("[%d]:", i); scanf("%d", &arr[i]);
					}
					goto menu;
					break;
				}
		case 2:
				{
					if(check==0){
						printf("Vui long nhap gia tri truoc khi thuc hien!!!\n");
						goto menu;
						break;
					}else
					// bat dau chay ctrinh in ra cac phan tu da nhap vao
					printf("In ra cac phan tu vua nhap: \n");
					for(int i=0; i<n; i++)
					{
						printf("%d ", arr[i]);
					}
					printf("\n");
					goto menu;
					break;
				}
		case 3:
				{
					printf("Chua hoan thanh bai 3!!!\n");
					goto menu;
					break;
				}
		case 4:
				{
					printf("Chua hoan thanh bai 4!!!\n");
					goto menu;
					break;
				}
		case 5:
				{
					int number, pos;
					if(check==0){
						printf("Vui long nhap gia tri truoc khi thuc hien!!!\n");
						goto menu;
						break;
					}else
					// bat dau chay ctrinh them phan tu
				    printf("Nhap gia tri phan tu: "); scanf("%d", &number);
				    printf("Nhap vi tri muon them (0-%d): ", n-1); scanf("%d", &pos);
				
				    if (pos>=0 && pos<=n) 
					{
				        for (int i=n; i>pos; i--) 
						{
				            arr[i] = arr[i-1]; 
				        }
				        arr[pos] = number; 
				        n++; 
				    } else {
				        printf("Vi tri khong ton tai!!\n");
				    }
				    printf("Mang sau khi them: \n");
				    for(int i=0; i<n; i++)
					{
						printf("%d ", arr[i]);
					}
					printf("\n");
					goto menu;
					break;
				}
		case 6:
			{
				int pos;
				if(check==0)
				{
					printf("Vui long nhap gia tri truoc khi thuc hien!!!\n");
					goto menu;
					break;
				}else
				// bat dau chay ctrinh xoa phan tu
				printf("Nhap vi tri muon xoa (0-%d): ", n-1);
			    scanf("%d", &pos);
			    if (pos>= 0 && pos< n) 
				{
			        for (int i = pos; i<n-1; i++) 
					{
			            arr[i] = arr[i+1]; 
			        }
			        n--; 
			    } else {
			        printf("Vi tri khong ton tai!\n");
			    }
			    printf("Mang sau khi xoa: \n");
			    for(int i=0; i<n; i++)
				{
					printf("%d ", arr[i]);
				}
				printf("\n");
				goto menu;
				break;
			}
		case 7:
				{
					if(check==0)
					{
						printf("Vui long nhap gia tri truoc khi thuc hien!!!\n");
						goto menu;
						break;
					}else
					
					for (int i=1; i<n; i++) 
					{
						int key=arr[i]; 
			        	int j=i-1;
			        	while (j>=0 && arr[j]<key) 
						{
			            	arr[j+1]=arr[j];
			          	  j--;
			        	}
			        arr[j+1]=key;
					}
					printf("Mang sau khi Sap xep: \n");
				    for(int i=0; i<n; i++)
					{
						printf("%d ", arr[i]);
					}
					printf("\n");
					goto menu;
			        break;
				}
		case 8:
				{
					int key, left=0, right =n-1, find=0;
					if(check==0)
					{
						printf("Vui long nhap gia tri truoc khi thuc hien!!!\n");
						goto menu;
						break;
					}else
					
					printf("Nhap phan tu can tim: "); scanf("%ld", &key);
				    while (left<=right) 
					{
				        int mid = left+(right-left)/2;  
				    
				        if (arr[mid]==key) 
						{
				            find=1;  
				        }
				        if (arr[mid]<key) 
						{
				            left=mid+1;
				        }
				        else 
						{
				            right=mid-1;
				        }	
				    }
				    if(find==1) printf("Phan tu %d ton tai trong mang.", key);
					else printf("Phan tu %d khong ton tai trong mang!!\n", key);
					
				    printf("\n");
				    goto menu;
				    break;			
				}
		case 9:
				{
					printf("Chua hoan thanh bai 9!!!\n");
					goto menu;
					break;
				}
		case 10:
				{
					int j=0, temp;
					if(check==0)
					{
						printf("Vui long nhap gia tri truoc khi thuc hien!!!\n");
						goto menu;
						break;
					}else
					//thuc hien dao nguoc cac phan tu trong mang
					printf("truoc khi dao nguoc: \n");
				    for(int i=0; i<n; i++)
					{
						printf("%d ", arr[i]);
					}
					for(int i=n-1; i>=j; i--)
					{
							temp=arr[j];
							arr[j]=arr[i];
							arr[i]=temp;
							j+=1;
					}
					printf("\nMang sau khi dao nguoc: \n");
				    for(int i=0; i<n; i++)
					{
						printf("%d ", arr[i]);
					}
					printf("\n");
					goto menu;
					break;
				}
		default:
				{
					printf("Vui long nhap lai lua chon\n");
					goto menu;
					break;
				}
	}
	return 0;
}
