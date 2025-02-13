#include<stdio.h>
int ErrorPass=5;
typedef struct{
	char idCategory[5];
	char nameCategory[100];
	int productCount;
} CATEGORY;
typedef struct{
	char idCategory[5];
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
			system("cls");
			printf(BGRN "%15sCorrect!\n\n" reset, "");
			break;
		}else {
			if(ErrorPass==0) 	
			{
				printf(BRED "%8sYou have %d attempts remaining!!!\n" reset, "", ErrorPass);
				printf(BYEL"\n%5s===Password entered too many times===\n", "");
			    printf("%5s  ===== Please try again later =====" reset, "");
				exit(0);	
			}
			system("cls");
			printf(BRED "%15sWRONG!!!\n\n" reset, "");
			printf(BRED "%8sYou have %d attempts remaining!!!\n" reset, "", ErrorPass);
			
			ErrorPass--;
		}
	}while(1);
	
}
//**global  virble*!!!
int categoryCount=0;
int productCount=0;
CATEGORY categories[MAX_CategoryList];
PRODUCT products[MAX_Products];
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* Reference - Category */
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
		printf("%4s|%15s\e[1;31mEMTY\e[0m%17s|\n", "", "", "");
		printf("%4s|===================================|\n", "", "");
	}else{
		for (int i=0; i<categoryCount; i++) 
		{
			printf("%4s|%2s%-7s|%2s%-24s|\n", "", "", categories[i].idCategory, "", categories[i].nameCategory);
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
void addCategory_2() {
    if (categoryCount>=MAX_CategoryList) 
	{
        printf(BRED "\nCategory List Is Full!!\n" reset);
        return;
    }
    printf("%5sInput ID: ", "");
    char id[5];
    scanf("%4s", id);
    getchar(); 
    for (int i = 0; i < categoryCount; i++) {
        if (strcmp(categories[i].idCategory, id) == 0) {
            printf(BRED "ID already exists!\n" reset);
            return;
        }
    }

    printf("Enter category name: ");
    fgets(categories[categoryCount].nameCategory, 100, stdin);
    categories[categoryCount].nameCategory[strcspn(categories[categoryCount].nameCategory, "\n")] = 0; // Xóa ký t? \n
    strcpy(categories[categoryCount].idCategory, id);
    categoryCount++;

    printf(BYEL "Category added! Please input [8] to save.\n" reset);
}
void editCategory_3()
{
	int flag=0;
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
            printf(BGRN "%5sCategory updated successfully!\n" reset, "");
            return;
		}else{
			flag=1;
		}
	}
	if(flag) printf(BRED "%5sCan't found your ID category!!!\n" reset, "");
}
void removeCategory_4() 
{
    char removeID[4];
    int choice;
    printf("%5sREMOVE CATEGORY:\n", "");
    printf("%3sPlease input ID Category to remove: ", "");
    scanf("%4s", removeID);
    getchar();
    
    for (int i=0; i<categoryCount; i++) 
	{
        if (strcmp(categories[i].idCategory, removeID) == 0) 
		{ 
		printf("%3sAre you sure you want to Remove category??\n", "");
            printf("%4s[0] No%10s[1] Yes\n", "", "");
            printf("%%4sChoice?? :", ""); scanf("%d", &choice);
            if(choice==1)
            {
            	for (int j=i; j<categoryCount-1; j++) 
				{
		            categories[j]=categories[j+i];
		        }
            	categoryCount--;
	            saveCategories_8();
	            printf(BGRN "Category removed successfully!\n" reset);
	            return;
			}else
			{
				printf(BRED "Category remove Exits!\n" reset);
				return;
			}    
        }
    }
    printf(BRED "%4sCategory ID not found!\n" reset, "");
}
void searchCategory_5() 
{
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
        if (strstr(categories[i].nameCategory, searchName) != NULL) //kiem tra chuoi ko tuyet doi strstr
		{
			printf("%4s|%-9s|%-26s|\n", "", categories[i].idCategory,categories[i].nameCategory);
	        printf("%4s|=========|==========================|\n", "", "");
            found = 1;
        }
    }
    if (!found) {
    	printf("%4s|\e[1;31m%1sNo matching categories found!\e[0m%6s|\n", "", "", "");
		printf("%4s|====================================|\n", "", "");
    }
}
void sortCategoriesA_6() //bubler sort
{
    for (int i = 0; i<categoryCount-1; i++) 
	{
        for (int j=i+1; j<categoryCount; j++) 
		{
            if (strcmp(categories[i].nameCategory, categories[j].nameCategory)>0) 
			{
                CATEGORY temp=categories[i];
                categories[i]=categories[j];
                categories[j]=temp;
            }
        }
    }
    saveCategories_8(); // Luu danh sach vao txt
    printf(BGRN "Categories sorted successfully!\n" reset);
}
void sortCategoriesD_6() //bubler sort
{
    for (int i = 0; i<categoryCount-1; i++) 
	{
        for (int j=i+1; j<categoryCount; j++) 
		{
            if (strcmp(categories[i].nameCategory, categories[j].nameCategory)<0) 
			{
                CATEGORY temp=categories[i];
                categories[i]=categories[j];
                categories[j]=temp;
            }
        }
    }
    saveCategories_8(); // Luu danh sach vao txt
    printf(BGRN "Categories sorted successfully!\n" reset);
}
void checkCategoryData_7() 
{
    FILE *file=fopen("CategoryList.txt", "r");
    if (!file) 
	{
        printf(BRED "Error: Cannot open CategoryList.txt!\n" reset);
        return;
    }

    char id[5], name[100];
    int line = 0, errorCount = 0;
    printf(BYEL "Checking category data...\n" reset);
    while (fscanf(file, "%4s %[^\n]", id, name)==2) 
	{
        line++;
        // Kiem tra ID
        if (strlen(id) != 4) 
		{
            printf(BRED "Line %d: Invalid ID format (%s)!\n" reset, line, id);
            errorCount++;
        }
        // Kiem tra ten
        if (strlen(name)==0) 
		{
            printf(BRED "Line %d: Category name is empty!\n" reset, line);
            errorCount++;
        }
    }
    fclose(file);

    if (errorCount == 0) {
        printf(BGRN "All category data is valid!\n" reset);
    } else {
        printf(BRED "Total errors found: %d\n" reset, errorCount);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////
/* Refernce - Product */
void loadProducts() {
    FILE *file = fopen("ProductList.txt", "r");
    if (file == NULL) {
        printf(BRED "Error opening product file!\n" reset);
        return;
    }

    productCount = 0;
    while (fgets(products[productCount].idProduct, sizeof(products[productCount].idProduct), file)) {
        // Xóa ký t? xu?ng dòng
        products[productCount].idProduct[strcspn(products[productCount].idProduct, "\n")] = '\0';

        fgets(products[productCount].nameProduct, sizeof(products[productCount].nameProduct), file);
        products[productCount].nameProduct[strcspn(products[productCount].nameProduct, "\n")] = '\0';

        fscanf(file, "%f\n", &products[productCount].price);

        fgets(products[productCount].idCategory, sizeof(products[productCount].idCategory), file);
        products[productCount].idCategory[strcspn(products[productCount].idCategory, "\n")] = '\0';

        productCount++;

        if (productCount >= MAX_Products) {
            printf(BRED "Product list is full!\n" reset);
            break;
        }
    }

    fclose(file);
}

void saveProducts() {
    FILE *file = fopen("ProductList.txt", "w");
    if (file) {
        for (int i = 0; i < productCount; i++) {
            fprintf(file, "%s %s %s %d %lld %s\n", products[i].idCategory, products[i].idProduct, products[i].nameProduct, products[i].slots, products[i].price, products[i].note);
        }
        fclose(file);
    }
}
void addProduct_1(char idCategory[4]) {
    if (productCount >= MAX_Products) {
        printf(RED "\nProduct List Is Full!!\n" reset);
        return;
    }


    int categoryExists = 0;
    for (int i = 0; i < categoryCount; i++) {
        if (strcmp(categories[i].idCategory, idCategory) == 0) {
            categoryExists = 1;
            break;
        }
    }

    if (!categoryExists) {
        printf(RED "Category ID not found! %s\n" reset, idCategory);
        return;
    }
    

    printf("Enter product ID: ");
    scanf("%4s", products[productCount].idProduct);
    getchar();
    
    printf("Enter product name: ");
    fgets(products[productCount].nameProduct, 100, stdin);
    products[productCount].nameProduct[strcspn(products[productCount].nameProduct, "\n")] = 0;
    
    printf("Enter slots: ");
    scanf("%d", &products[productCount].slots);
    getchar();
    
    printf("Enter price: ");
    scanf("%lld", &products[productCount].price);
    getchar();
    
    printf("Enter note: ");
    fgets(products[productCount].note, 50, stdin);
    products[productCount].note[strcspn(products[productCount].note, "\n")] = 0;
    
    strcpy(products[productCount].idCategory, idCategory);
    productCount++;
    
    saveProducts();
    printf(GRN "Product added and saved successfully!\n" reset);
}
void displayProducts(char idCategory[]) {
    printf(BYEL "%-10s %-10s %-30s %-10s %-15s %-20s\n" reset, 
           "ID Cat", "ID Prod", "Product Name", "Slots", "Price", "Note");
    printf(BYEL "--------------------------------------------------------------------------------\n" reset);

    int found = 0;
    for (int i = 0; i < productCount; i++) {
        if (strcmp(products[i].idCategory, idCategory) == 0) {
            printf("%-10s %-10s %-30s %-10d %-15lld %-20s\n", 
                   products[i].idCategory, products[i].idProduct, 
                   products[i].nameProduct, products[i].slots, 
                   products[i].price, products[i].note);
            found = 1;
        }
    }
    
    if (!found) {
        printf(BRED "No products found for this category!\n" reset);
    }
}

