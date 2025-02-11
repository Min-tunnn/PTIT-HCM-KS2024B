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

typedef struct{
	char idCategory[5];
	char nameCategory[100];
} CATEGORY;
typedef struct{
	char idProduct[5];
} PRODUCT;
void Authentication()//xac minh tk admin ->
{
	do
	{
		char mail[100], pass[18];
		printf("***Store Management System Using C***\n");
		printf("%15sLOGIN ADMIN\n", "");
		printf("%8s========================\n", "");
		printf("%8sEmail: ", ""); scanf("%s", &mail);
		printf("%8sPassword: ", ""); scanf("%s", &pass);
		printf("%8s========================\n", "");
		if(strcmp(EMAIL, mail)==0&&strcmp(pass, PASSWORD)==0) break;
		else printf("WRONG !!!\n");
	}while(1);
}
//***!!!
int categoryCount = 0;
CATEGORY categories[MAX_CategoryList];

void loadCategories()// doc file txt list_danh_muc
{
    FILE *file = fopen("CategoryList.txt", "r");
    if (file) 
	{
        categoryCount = 0;
        while (fscanf(file, "%4s %[^\n]", categories[categoryCount].idCategory, categories[categoryCount].nameCategory) == 2)
		{
            categoryCount++;
        }
        fclose(file);
    }
}
void showCategoryList() 
{
    printf("%16sLIST CATEGORY\n", "");
	printf("%4s|=========|==========================|\n", "", "");
	printf("%4s|%3sNo.%3s|%9sCategory%9s|\n", "", "", "", "", "");
	printf("%4s|=========|==========================|\n", "", "");
    for (int i = 0; i < categoryCount; i++) 
	{
		printf("%4s|%2s%s%2s|%9s%s%9s|\n", "", "", categories[i].idCategory, "", "", categories[i].nameCategory, "");
        printf("%4s|=========|==========================|\n", "", "");
    }
}
void saveCategories() {
    FILE *file = fopen("CategoryList.txt", "w");
    if (file) {
        for (int i=0; i<categoryCount; i++) 
		{
            fprintf(file, "%s %s\n", categories[i].idCategory, categories[i].nameCategory);
        }
        fclose(file);
    }
}
void addCategory() {
    if (categoryCount >= MAX_CategoryList) {
        printf("\nCategory List Is Full!\n");
        return;
    }
    printf("\nInput ID: ");
    char id[5];
    scanf("%4s", id);
    getchar(); // Xoa bo nho dem

    for (int i = 0; i < categoryCount; i++) {
        if (strcmp(categories[i].idCategory, id)==0) {
            printf("ID already!!!\n");
            return;
        }
    }

    printf("Enter category name:");
    fgets(categories[categoryCount].nameCategory, 100, stdin);
    categories[categoryCount].nameCategory[strcspn(categories[categoryCount].nameCategory, "\n")] = 0;// loai bo ky tu \n
    strcpy(categories[categoryCount].idCategory, id);
    categoryCount++;
    saveCategories();
}

int main()
{
	Authentication();
	int choice, categoryCount;
	mainMenu:
	printf("***Store Management System Using C***\n");
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
	printf("%8s========================\n", "");
	printf("%8sEnter The Choice:", ""); scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			{
				loadCategories();
				showCategoryList();
				/*EMTY*/
				printf("%4s[0] Back / [1] Edit product in category\n", "");
				printf("%4sEnter The Choice:", ""); scanf("%d", &choice);
				if(choice==0) goto mainMenu;
				else{
					printf("***Store Management System Using C***\n");
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
					printf("%8s========================\n", "");
					printf("%8sEnter The Choice:", ""); scanf("%d", &choice);
					switch (choice)
					{
						case 1:
							{
								
							}
					}
				}
				goto mainMenu;		
				break;
			}
		case 2:
			{
				addCategory();
				goto mainMenu;
			}
		default:
			printf("Vui long nhap lai [0-9]!!!\n");
			goto mainMenu;
	}
	return 0;
}
