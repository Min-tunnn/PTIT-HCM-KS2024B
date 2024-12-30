#include<stdio.h>
#include<math.h>
#define max 100
void input(int m, int n, int matrix[max][max])
{
	
    for (int i=0; i<m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void output_type_matrix(int m, int n, int matrix[max][max])
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
void output_type_borders(int m, int n, int matrix[max][max]) //in ra duong bien type matrix
{
    for (int i=0; i<m; i++) 
	{
        for (int j=0; j<n; j++) 
		{
            if (i==0 || i==m-1 || j==0 || j==n-1) 
			{
                printf("%d ", matrix[i][j]); 
            } else {
                printf("  "); 
            }
        }
        printf("\n"); 
    }
}
void output_matrix_corner(int m, int n, int matrix[max][max])
{
	for(int i=0; i<m;i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==0&&j==n-1||j==0&&j==n-1||j==0&&i==0||i==m-1&&j==0||i==m-1&&j==n-1)
			{
				printf("%d ", matrix[i][j]);
			}else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
void output_type_cross(int m, int n, int matrix[max][max])
{
	//cross main
	printf("Duong cheo chinh: \n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==j)
			{
				printf("%d ", matrix[i][j]);
			}	
		}
	}
	//cross support
	printf("\nDuong cheo phu: \n");
	for(int i=0; i<m; i++)
	{
		for(int j=n-1; j>=0; j--)//while(j--)
		{
			printf("%d ", matrix[i][j]);
			n-=1;
			break;
		}
	}
	printf("\n");	
}
bool isprime(int num_check)
{
	if(num_check<2) return false;
	for (int i=2; i<=sqrt(num_check); i++)
	{
		if(num_check%i==0) return false;
	}
	return true;
}
void output_type_isprime(int m, int n, int matrix[max][max])
{
	for (int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(isprime(matrix[i][j]))
			{
				printf("%d ", matrix[i][j]);;
			}else
			{
				printf("  ");
			}
			
		}
		printf("\n");
	}
}
int main()
{
	int choice;
	menu:
	printf("|==================================MENU==================================|\n");
	printf("|1. Nhap gia tri phan tu cua mang.                                       |\n");
	printf("|2. In gia tri cac phan tu cua mang theo ma tran.                        |\n");
	printf("|3. In ra cac phan tu o goc theo ma tran                                 |\n");
	printf("|4. In ra cac phan tu nam tren duong bien theo ma tran.                  |\n");
	printf("|5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tra. |\n");
	printf("|6. In ra cac phan tu la so nguyen to theo ma tran.                      |\n");
	printf("|7. Thoat                                                                |\n");
	printf("|========================================================================|\n");
	printf("Nhap lua chon: "); scanf("%d", &choice);
	//INPUT TYPE
	int m, n, matrix[max][max], flag;
	switch (choice)
	{
		case 1:
			flag=1;
			{	
				printf("Nhap hang: "); scanf("%d", &m);
				printf("Nhap dong: "); scanf("%d", &n);
				printf("Nhap gia tri cho mang:\n");
				input(m, n, matrix);
				goto menu;
				break;
			}
		case 2:
			if(flag==1)
			{
				printf("In phan tu theo ma tran: \n");
				output_type_matrix(m, n, matrix);
				goto menu;
				break;
			}else{
				printf("Vui long nhap gia tri phan tu!!!\n");
				goto menu;
				break;
			}
		case 3:
			if(flag==1)
			{
				printf("ma tran cac phan tu goc: \n");
				output_matrix_corner(m, n, matrix);
				goto menu;
				
			}else{
				printf("Vui long nhap gia tri phan tu!!!\n");
				goto menu;
				break;
			}
		case 4:
			if(flag==1)
			{
				printf("Cac phan tu tren duong bien:\n");
				output_type_borders(m, n, matrix);
				goto menu;
				break;
			}else{
				printf("Vui long nhap gia tri phan tu!!!\n");
				goto menu;
				break;
			}
		case 5:
			if(flag==1)
			{
				printf("cac phan tu cheo chinh & phu trong mang: \n");
				for(int i=0; i<m; i++)
				{
					for(int j=0; j<n; j++)
					{
							printf("%d ", matrix[i][j]);	
					}
					printf("\n");
				}
				output_type_cross(m, n, matrix);
				goto menu;
				break;
			}else{
				printf("Vui long nhap gia tri phan tu!!!\n");
				goto menu;
				break;
			}
		case 6:
			if(flag==1)
			{
				output_type_isprime(m, n, matrix);
				goto menu;
				break;
			}else{
				printf("Vui long nhap gia tri phan tu!!!\n");
				goto menu;
				break;
			}
			
	}
	return 0;
}
