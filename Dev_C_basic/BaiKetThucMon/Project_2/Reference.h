/////////////////////////////////////////////////////////////////////////////////////////////////////////////
											/* reference*/
#include<stdio.h>



typedef struct{
	char idCategory[5];
	char nameCategory[100];
} CATEGORY;
typedef struct{
	char idProduct[5];
	char nameProduct[100];
	int slots;
	long long price;
	char note[50];
} PRODUCT;
void Authentication()//xac minh tk admin ->
{
	do
	{
		char mail[100], pass[18];
		printf("%3s***Store Management System Using C***\n", "");
		printf("%15sLOGIN ADMIN\n", "");
		printf("%8s========================\n", "");
		printf("%8sEmail: ", ""); scanf("%s", mail);
		printf("%8sPassword: ", ""); scanf("%s", pass);
		printf("%8s========================\n", "");
		if(strcmp(EMAIL, mail)==0&&strcmp(pass, PASSWORD)==0) 
		{
			printf(BGRN "%15sCorrect!\n\n" reset, "");
			break;
		}else printf(BRED "%15sWRONG !!!\n\n" reset, "");
	}while(1);
}
//***!!!
int categoryCount=0;
CATEGORY categories[MAX_CategoryList];
PRODUCT products[MAX_Products];
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* */
void loadCategories()// doc file txt list_danh_muc
{
    FILE *file=fopen("CategoryList.txt", "r");
    if (file) 
	{
        categoryCount=0;
        while (fscanf(file, "%4s %[^\n]", categories[categoryCount].idCategory, categories[categoryCount].nameCategory) == 2)
		{
            categoryCount++;
        }
        fclose(file);
    }
}
void showCategoryList_1() 
{
    printf("%16sLIST CATEGORY\n", "");
	printf("%4s|=========|==========================|\n", "", "");
	printf("%4s|%3sNo.%3s|%9sCategory%9s|\n", "", "", "", "", "");
	printf("%4s|=========|==========================|\n", "", "");
	if(categoryCount==0)
	{
		printf("%4s|%15sEMTY%17s|\n", "", "", "");
		printf("%4s|===================================|\n", "", "");
	}else{
		for (int i=0; i<categoryCount; i++) 
		{
			printf("%4s|%2s%s%2s|%9s%s%9s|\n", "", "", categories[i].idCategory, "", "", categories[i].nameCategory, "");
	        printf("%4s|=========|==========================|\n", "", "");
	    }
	}
	    
}
void saveCategories_8() 
{
    FILE *file=fopen("CategoryList.txt", "w");
    if (file) {
        for (int i=0; i<categoryCount; i++) 
		{
            fprintf(file, "%s %s\n", categories[i].idCategory, categories[i].nameCategory);
        }
        fclose(file);
    }
}
void addCategory_2() 
{
    if (categoryCount>=MAX_CategoryList) 
	{
        printf(BRED "\nCategory List Is Full!!\n" reset);
        return;
    }
    printf("%5sInput ID: ", "");
    char id[5];
    scanf("%5s", id);
    getchar(); // Xoa bo nho dem

    for (int i = 0; i < categoryCount; i++) 
	{
        if (strcmp(categories[i].idCategory, id)==0) 
		{
            printf(BGRN "ID already!!!\n" reset);
            return;
        }
    }

    printf("Enter category name:");
    fgets(categories[categoryCount].nameCategory, 100, stdin);
    categories[categoryCount].nameCategory[strcspn(categories[categoryCount].nameCategory, "\n")] = 0;// loai bo ky tu \n
    strcpy(categories[categoryCount].idCategory, id);
    categoryCount++;
    saveCategories_8();
}
void editCategory_3()
{
	char edit[5];
	printf("%5sEDIT & CHANGE CATEGORY:\n", "");
    printf("%8sPlease input ID Category: ", "");
    scanf("%5s", edit);
    getchar();
    for(int i=0; i<categoryCount; i++)
    {
    	if(strcmp(categories[i].idCategory, edit)==0){
    		printf("Name: %s", "", categories[i].nameCategory);
    		printf("\nNew Name: "); fgets(categories[i].nameCategory, 100, stdin);
    		categories[i].nameCategory[strcspn(categories[i].nameCategory, "\n")] = 0;
            saveCategories_8();
            printf("%5sCategory updated successfully!\n", "");
            return;
		}
		else{
		printf("%5sCan't found your ID category!!!\n", "");
	}
	}
}
void removeCategory_4() 
{
    char removeID[5];
    printf("%5sREMOVE CATEGORY:\n", "");
    printf("%8sPlease input ID Category to remove: ", "");
    scanf("%4s", removeID);
    getchar(); // Xóa b? nh? d?m
    
    for (int i = 0; i < categoryCount; i++) {
        if (strcmp(categories[i].idCategory, removeID) == 0) {
            for (int j=i; j<categoryCount-1; j++) {
                categories[j]=categories[j+i];
            }
            categoryCount--;
            saveCategories_8();
            printf(BGRN "Category removed successfully!\n" reset);
            return;
        }
    }
    printf("Category ID not found!\n");
}
void searchCategory_5() {
    char searchName[100];
    printf("%8sEnter category name to search: ", "");
    getchar();
    fgets(searchName, 100, stdin);
    searchName[strcspn(searchName, "\n")] = 0;
    int found = 0;
    
    printf("\nMatching Categories:\n");
    printf("%16sLIST CATEGORY\n", "");
	printf("%4s|=========|==========================|\n", "", "");
	printf("%4s|%3sNo.%3s|%9sCategory%9s|\n", "", "", "", "", "");
	printf("%4s|=========|==========================|\n", "", "");
    for (int i=0; i<categoryCount; i++) 
	{
        if (strstr(categories[i].nameCategory, searchName) != NULL) //strstr kiem tra gia tri chuoi không tuyet doi
		{
			printf("%4s|%2s%s%2s|%9s%s%9s|\n", "", "", categories[i].idCategory, "", "", categories[i].nameCategory, "");
	        printf("%4s|=========|==========================|\n", "", "");
            found = 1;
        }
    }
    if (!found) {
    	printf("%4s|%1sNo matching categories found!%6s|\n", "", "", "");
		printf("%4s|====================================|\n", "", "");
    }
}
