//libery
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//limits binary
#define MAX_CategoryList 100
#define MAX_Products 100
//Acount admin
#define EMAIL "t"
#define PASSWORD "T"
#include "DesignColor.h"
#include "Reference.h"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	Authentication();//authnti acount admin
	int choice;
	char idCategory[4];
	loadCategories();
	
	categoryMenu:
	printf("%3s***Store Management System Using C***\n", "");
	printf(BMAG "%15s(CATEGORY)\n" reset, "");
	printf("%12sCHOOSE YOUR ROLE\n", "");
	printf("%8s========================\n", "");
	printf("%8s[1] Show category list.\n", "");
	printf("%8s[2] Add category.\n", "");
	printf("%8s[3] Edit category (Can't edit ID).\n", "");
	printf("%8s[4] Remove category.\n", "");
	printf("%8s[5] Search category by name.\n", "");
	printf("%8s[6] Sort category list by name.\n", "");
	printf("%8s[7] Check input data for category.\n", "");
	printf("%8s[8] Save Data.\n", "");
	printf("%8s[0] Exit Program.\n", "");
	printf("%8s========================\n" reset, "");
	printf("%8sEnter The Choice:", ""); scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			{
				system("cls");
				showCategoryList_1();
				printf(BYEL "%4s[0] Back / [1] Edit product in category\n" reset, "" );
				do
				{
					printf("%4sEnter The Choice:", ""); scanf("%d", &choice);
				}while(choice<0||choice>1);
				if(choice==0) goto categoryMenu;
				else{
					printf("Choose your list product in category: "); 
					scanf("%4s", idCategory);
				    getchar();
				    
				    int flag = -1;
				    for (int i = 0; i < categoryCount; i++) {
				        if (strcmp(categories[i].idCategory, idCategory) == 0) {
				            flag = i;
				            break;
				        }
				    }
				    if (flag == -1) {
				        printf(BRED "Category ID not found!\n" reset);
				        goto categoryMenu;
				        break;
				    }
					productMenu:
					printf(BGRN "%15sCorrect!!!\n" reset, "");
					displayProducts(idCategory);
					
					printf("%3s***Store Management System Using C***\n", "");
					printf(BCYN "%16s(PRODUCT)\n" reset, "");
					printf("%12sCHOOSE YOUR ROLE\n", "");
					printf("%8s========================\n", "");
					printf("%8s[1] Add product.\n", "");
					printf("%8s[2] Edit product.\n", "");
					printf("%8s[3] Remove product.\n", "");
					printf("%8s[4] Sort by price.\n", "");
					printf("%8s[5] Sort by name.\n", "");
					printf("%8s[6] Find product by name.\n", "");
					printf("%8s[7] Back to main menu.\n", "");
					printf("%8s[0] Exit Program.\n", "");
					printf("%8s========================\n" reset, "");
					printf("%8sEnter The Choice:", ""); scanf("%d", &choice);
					switch (choice)
					{
						case 1:
							{
								addProduct_1(idCategory);
								goto categoryMenu;
								break;
							}
						case 7:
							{
								goto categoryMenu;
								break;
							}
						default:
							printf(BRED "%5sVui long nhap lai [0-7]!!\n" reset, "");
							goto productMenu;
							break;
					}
				}
				goto categoryMenu;		
				break;
			}
	case 2:
			{
				addCategory_2();
				goto categoryMenu;
			}
		case 3:
			{
				editCategory_3();
				goto categoryMenu;
				break;
			}
		case 4:
			{
				removeCategory_4();
				goto categoryMenu;
				break;
			}
		case 5:
			{
				searchCategory_5();
				goto categoryMenu;
				break;
			}
		case 6:
			{
				printf("%5s[1] Sort in ascending order.\n", "");
				printf("%5s[2] Sort in descending order.\n", "");
				printf("%5s[0] Back menu.\n", "");
				printf("%5sChoice: ", ""); scanf("%d", &choice);
				if(choice==1) sortCategoriesA_6();
				else if(choice==2) sortCategoriesD_6();
				else goto categoryMenu;
				goto categoryMenu;
				break;
			}
		case 7:
			{
				system("cls");
				checkCategoryData_7();
				goto categoryMenu;
				break;
			}
		case 8:
	    	{
	    		system("cls");
		        saveCategories_8();
		        printf(BGRN "Categories saved successfully!\n" reset);
		        goto categoryMenu;
		        break;
	    	}
		case 0:
			{
				system("cls");
			    printf(BYEL"\n%5s========= Thank you =========\n", "");
			    printf("%5s  ===== See you soon =====" reset, "");
			    exit(0);
			}
		default:
			printf(BRED "Vui long nhap lai [0-9]!!!\n" reset);
			goto categoryMenu;
	}
	return 0;
}
