#include<stdio.h>
#define max 1000

void input(int n, int arr[max])
{
	
	for (int i=0; i<n; i++)
	{
		printf("[%d]", i); scanf("%d", &arr[i]); 
	}
}
void output(int n, int arr[max])
{
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void add_arr(int n, int arr[max])
{
	
	int pos, value, temp;
	printf("Nhap vi tri can them: "); scanf("%d", &pos);
	printf("Gia tri: "); scanf("%d", &value);
	for(int i=0; i<n; i++)
	{
		if(i==pos)
		{
			
			for (int j=n-1; j>=pos; j--)
			{
				int temp=arr[j];
				arr[j+1]=temp;
			}
			
			arr[pos]=value;
		}
	}
}
void change_arr(int n, int arr[max])
{
	int pos, value;
	printf("Nhap vi tri can sua: "); scanf("%d", &pos);
	printf("Nhap gia tri: "); scanf("%d", &value);
	arr[pos]=value;
}
void del_arr(int n, int arr[max])
{
	int pos;
	printf("Nhap vi tri muon xoa: "); scanf("%d", &pos);
	for(int i=pos; i<n; i++)
	{
		arr[i]=arr[i+1];
	}		
	
}
void sort(int n, int arr[max])
{
	char choice_char;
	again_sort:
	printf("chon: "); scanf("%s", &choice_char);
	if(choice_char=='A'||choice_char=='a')
	{
		for (int i=0; i<n-1; i++) 
		{
	        for (int j=0; j<n-i-1; j++) 
			{
	            if (arr[j] > arr[j+1]) 
				{
	                int temp = arr[j];
	                arr[j] = arr[j+1];
	                arr[j+1] = temp;
	            }
	        }
	    }
	    printf("Phan tu sau khi duoc sap xep: \n");
	    for(int i=0; i<n; i++)
		{
			printf("%d ", arr[i]);
		}
	}else if(choice_char=='B'||choice_char=='b')
	{
		for (int i=0; i<n-1; i++) 
		{
	        for (int j=0; j<n-i-1; j++) 
			{
	            if (arr[j] < arr[j+1]) 
				{
	                int temp = arr[j];
	                arr[j] = arr[j+1];
	                arr[j+1] = temp;
	            }
	        }
	    }
	    printf("Phan tu sau khi duoc sap xep: \n");
	    for(int i=0; i<n; i++)
		{
			printf("%d ", arr[i]);
		}
		
	}else
	{
		printf("VUI LONG NHAP LAI!!\n");
		goto again_sort;
	}
	
}
void search_arr(int n, int arr[max])
{
	int key, temp[max], check=0;
	int j=0;
	printf("Nhap gia tri can tim: "); scanf("%d", &key);
	for (int i = 0; i < n; i++) 
	{
        if (arr[i] == key) 
		{
			check=1;
           temp[j]=i;
           j++;
        }
    }
    if(check)
    {
    	printf("so lan xuat hien trong mang: %d .\n", j);
    	printf("phan tu %d xuat hien o vtri: ", key);
    	for(int i=0; i<j; i++)
    	{
    		printf("[%d] ", temp[i]);
		}
		
	}else{
		printf("Phan tu %d khong xuat hien trong mang\n");
	}
    
    
}
int main()
{
	int choice, n, arr[max], flag=0;
	
	menu:
	printf("====================***  MENU  ***====================\n");
	printf("| 1. Nhap phan tu vao mang.                          |\n");
	printf("| 2. In cac gia tri phan tu                          |\n");
	printf("| 3. Them phan tu vao vi tri chi dinh.               |\n");
	printf("| 4. Sua phan tu o vi tri chi dinh.                  |\n");
	printf("| 5. Xoa phan tu o vi tri chi dinh.                  |\n");
	printf("| 6. Sap xep cac phan tu trong mang.                 |\n");
	printf("| 7. Tim kiem cac phan tu nhap vao.                  |\n");
	printf("| 8. Thoat.                                          |\n");
	printf("======================================================\n");
	printf("Lua chon: "); scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			flag=1;
			{
				printf("Nhap  phan tu vao mang: \n");
				printf("So luong phan tu trong mang: "); scanf("%d", &n);
				input(n, arr);
				printf("success!!!\n");
				goto menu;
				break;
			}
		case 2:
			if(flag==1)
			{
				printf("In cac phan tu trong mang: \n");
				output(n, arr);
				goto menu;
				break;
			}else
			{
				printf("Vui long nhap phan tu truoc khi thuc hien: \n");
				goto menu;
				break; 
			}
		case 3:
			if(flag==1)
			{
				printf("Them phan tu vao vi tri chi dinh: \n");
				n++;
				add_arr(n, arr);
				printf("Success!!\n");
				goto menu;
				break;
			}else{
				printf("Vui long nhap phan tu truoc khi thuc hien: \n");
				goto menu;
				break;
			}
		case 4:
			if(flag==1)
			{
				 change_arr(n, arr);
				 printf("Success!!!\n");
				 goto menu;
				 break;
			}else{
				printf("Vui long nhap phan tu truoc khi thuc hien: \n");
				goto menu;
				break;
			}
		case 5:
			if(flag==1)
			{
				del_arr(n, arr);
				n--;
				goto menu;
				break;
			}else{
				printf("Vui long nhap phan tu truoc khi thuc hien: \n");
				goto menu;
				break;
			}
		case 6:
			if(flag==1)
			{
				printf("a. Tang dan\n");
				printf("b. Giam dan\n");
				
				sort( n, arr);
				printf("\n");
				goto menu;
				break;	
			}else{
				printf("Vui long nhap phan tu truoc khi thuc hien: \n");
				goto menu;
				break;
			}
		case 7:
			if(flag==1)
			{
				search_arr(n, arr);;
				printf("\n");
				goto menu;
				break;
			}else{
				printf("Vui long nhap phan tu truoc khi thuc hien: \n");
				goto menu;
				break;
			}
		case 8:
			{
				printf("KET THUC CHUONG TRINH!!\n");
				return 0;
			}
		default:
			{
				printf("Lua chon khong hop le!!!\n");
				goto menu;
				break;
			}
	}
}
