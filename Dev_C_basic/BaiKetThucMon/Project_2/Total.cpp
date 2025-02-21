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

//regular text
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

//Regular bold text
#define BBLK "\e[1;30m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BYEL "\e[1;33m"
#define BBLU "\e[1;34m"
#define BMAG "\e[1;35m"
#define BCYN "\e[1;36m"
#define BWHT "\e[1;37m"

//Regular background
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YELB "\e[43m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"
#define WHTB "\e[47m"

//High intensty background
#define BLKHB "\e[0;100m"
#define REDHB "\e[0;101m"
#define GRNHB "\e[0;102m"
#define YELHB "\e[0;103m"
#define BLUHB "\e[0;104m"
#define MAGHB "\e[0;105m"
#define CYNHB "\e[0;106m"
#define WHTHB "\e[0;107m"

//High intensty text
#define HBLK "\e[0;90m"
#define HRED "\e[0;91m"
#define HGRN "\e[0;92m"
#define HYEL "\e[0;93m"
#define HBLU "\e[0;94m"
#define HMAG "\e[0;95m"
#define HCYN "\e[0;96m"
#define HWHT "\e[0;97m"

//Bold high intensity text
#define BHBLK "\e[1;90m"
#define BHRED "\e[1;91m"
#define BHGRN "\e[1;92m"
#define BHYEL "\e[1;93m"
#define BHBLU "\e[1;94m"
#define BHMAG "\e[1;95m"
#define BHCYN "\e[1;96m"
#define BHWHT "\e[1;97m"

//Reset
#define reset "\e[0m"
#define CRESET "\e[0m"
#define COLOR_RESET "\e[0m"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int ErrorPass=5;

typedef struct {
	char idCategory[5];
	char nameCategory[100];
	int productCount;
} CATEGORY;

typedef struct {
	char idCategory[5];
	char idProduct[5];
	char nameProduct[100];
	int slots;
	long long price;
	char note[50];
} PRODUCT;
void Authentication() {
	do {
		char mail[100], pass[18];
		printf("%3s***Store Management System Using C***\n", "");
		printf("%15sLOGIN ADMIN\n", "");
		printf("%8s========================\n", "");
		printf("%8sEmail: ", "");
		scanf("%s", mail);
		printf("%8sPassword: ", "");
		scanf("%s", pass);
		printf("%8s========================\n", "");
		if(strcmp(EMAIL, mail)==0&&strcmp(pass, PASSWORD)==0) {
			system("cls");
			printf(BGRN "%14sCompleted Login!\n\n" reset, "");
			break;
		} else {
			if(ErrorPass==0) {
				printf(BRED "%8sYou have %d attempts remaining!!!\n" reset, "", ErrorPass);
				printf(BYEL"\n%5s===Password entered too many times===\n", "");
				printf("%5s  ===== Please try again later =====" reset, "");
				exit(0);
			}
			system("cls");
			printf(BRED "%15sWRONG!!!\n\n" reset, "");
			printf(BRED "%8sYou have %d attempts remaining!!!\n" reset, "", ErrorPass);

		}
	} while(1);

}
//**global  virble*!!!
int categoryCount=0;
CATEGORY categories[MAX_CategoryList];
////////////////////////////////////////////////////* Reference - Category *///////////////////////////////////////////////////////////

void loadCategories() { // doc file txt list_danh_muc
	FILE *file=fopen("CategoryList.txt", "r");
	if (file) {
		while (fscanf(file, "%4s %[^\n]", categories[categoryCount].idCategory, categories[categoryCount].nameCategory) == 2) {
			categoryCount++;
		}
		fclose(file);
	}
}
void showCategoryList_1() {
	printf("%16sLIST CATEGORY\n", "");
	printf("%4s|=========|==========================|\n", "", "");
	printf("%4s|%3sNo.%3s|%9sCategory%9s|\n", "", "", "", "", "");
	printf("%4s|=========|==========================|\n", "", "");
	if(categoryCount==0) {
		printf("%4s|%15s\e[1;31mEMTY\e[0m%17s|\n", "", "", "");
		printf("%4s|===================================|\n", "", "");
	} else {
		for (int i=0; i<categoryCount; i++) {
			printf("%4s|%2s%-7s|%2s%-24s|\n", "", "", categories[i].idCategory, "", categories[i].nameCategory);
			printf("%4s|=========|==========================|\n", "", "");
		}
	}

}
void saveCategories_8() 
{
	FILE *file=fopen("CategoryList.txt", "w");
	if(file) 
	{
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
		system("cls");
		printf(BRED "\nCategory List Is Full!!\n" reset);
		return;
	}
	printf("%5sInput ID: ", "");
	char id[5];
	scanf("%4s", id);
	getchar();

	for (int i=0; i<categoryCount; i++) 
	{
		if (strcmp(categories[i].idCategory, id) == 0) 
		{
			system("cls");
			printf(BRED "ID already exists!\n" reset);
			return;
		}
	}

	printf("Enter category name: ");

	fgets(categories[categoryCount].nameCategory, 100, stdin);

	categories[categoryCount].nameCategory[strcspn(categories[categoryCount].nameCategory, "\n")] = 0; // Xóa ký t? \n

	strcpy(categories[categoryCount].idCategory, id);

	categoryCount++;
	
	system("cls");
	
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
		if(strcmp(categories[i].idCategory, edit)==0) 
		{
			printf("Name: %s", "", categories[i].nameCategory);
			printf("\nNew Name: ");
			fgets(categories[i].nameCategory, 100, stdin);
			categories[i].nameCategory[strcspn(categories[i].nameCategory, "\n")] = 0;
			saveCategories_8();
			printf(BGRN "%5sCategory updated successfully!\n" reset, "");
			return;
		} else {
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
			printf("%%4sChoice?? :", "");
			scanf("%d", &choice);
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
			} else {
				printf(BRED "Category remove Exits!\n" reset);
				return;
			}
		}
	}
	printf(BRED "%4sCategory ID not found!\n" reset, "");
}
void searchCategory_5() {
	char searchName[100];
	printf("%8sEnter category name to search: ", "");
	getchar();
	fgets(searchName, 100, stdin);
	searchName[strcspn(searchName, "\n")] = 0;
	system("cls");
	int found=0;

	printf("\nMatching Categories: %s\n", searchName);
	printf("%16sLIST CATEGORY\n", "");
	printf("%4s|=========|==========================|\n", "", "");
	printf("%4s|%3sNo.%3s|%9sCategory%9s|\n", "", "", "", "", "");
	printf("%4s|=========|==========================|\n", "", "");
	for(int i=0; i<categoryCount; i++) 
	{
		if (strstr(categories[i].nameCategory, searchName) != NULL) { //kiem tra chuoi ko tuyet doi strstr
			printf("%4s|%-9s|%-26s|\n", "", categories[i].idCategory,categories[i].nameCategory);
			printf("%4s|=========|==========================|\n", "", "");
			found = 1;
		}
	}
	if(!found) 
	{
		printf("%4s|\e[1;31m%1sNo matching categories found!\e[0m%6s|\n", "", "", "");
		printf("%4s|====================================|\n", "", "");
	}
}
void sortCategoriesA_6() 
{ //bubler sort
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
void sortCategoriesD_6() 
{ //bubler sort
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

	//emty!!
}
///////////////////////////////////////////* Refernce - Product *///////////////////////////////////////////////////////

int productCount=0;
PRODUCT product[MAX_Products];

void loadProduct() 
{
	FILE *file=fopen("ProductList.txt", "r");
	if(file) {
		while (fscanf(file, "%s %s %49s %d %ld %s",
		              &product[productCount].idCategory,
		              &product[productCount].idProduct,
		              &product[productCount].nameProduct,
		              &product[productCount].slots,
		              &product[productCount].price,
		              &product[productCount].note) != EOF) {
			productCount++;
		}
	
		fclose(file);
	}
}
void displayProduct(char idCategory[4]) 
{
	printf("List product int category %s:\n", idCategory);
	int found = 0;
	printf("%3s|======================================================================================|\n", "");
	printf("%3s|%35sLIST PRODUCT IN %-35s|\n", "", "", idCategory);
	printf("%3s|======================================================================================|\n", "");
	printf("%3s|%3sID%3s|%13sName%13s|%2sSlots%2s|%5sPrice%5s|%8sNote%8s|\n", "", "", "", "", "", "", "", "", "", "", "");
	printf("%3s|======================================================================================|\n", "");
	for (int i=0; i<productCount; i++)
	{
		if (strcmp(product[i].idCategory, idCategory)==0) 
		{
			printf("%3s|%2s%-6s|%2s%-28s|%2s%-7d|%2s%-13ld|%2s%-18s|\n", "",
			       "", product[i].idProduct,
			       "", product[i].nameProduct,
			       "", product[i].slots,
			       "", product[i].price,
			       "", product[i].note);
			found = 1;
			printf("%3s|======================================================================================|\n", "");
		}
	}
	if (!found) 
	{	
		printf("%3s|%30s\e[1;31mNo matching products found!\e[0m%29s|\n", "", "", "");
		printf("%3s|======================================================================================|\n", "");
	}
}
int isIdExist(char id[4], char idcategory[4]) 
{
    for (int i = 0; i < productCount; i++) 
	{
		if(strcmp(product[i].idCategory, idcategory)==0){
				if (strcmp(product[i].idProduct,  id)==0) 
			{
	            return 1; 
	        }
		}
    }
    return 0; // ID chua ton tai
}
void addProduct_1(char idCategory[4]) 
{
	PRODUCT newProduct;
	strncpy(newProduct.idCategory, idCategory, 4);
    newProduct.idCategory[4] = '\0';  
    
	printf("ID Product: ");
	scanf("%s", &newProduct.idProduct);
	if (isIdExist(newProduct.idProduct, idCategory)) 
	{
        printf(BRED "ID already exits!\n" reset, newProduct.idProduct);
        return;
    }
	printf("Name: ");
	scanf(" %[^\n]", &newProduct.nameProduct); //nhan ca gia tri dau cach
	for (int i = 0; newProduct.nameProduct[i] != '\0'; i++) 
	{//thay ' ' bang '_'
        if (newProduct.nameProduct[i] == ' ') 
		{
            newProduct.nameProduct[i] = '_';
        }
    }
	printf("Slots: ");
	scanf("%d", &newProduct.slots);
	
	printf("Price: ");
	scanf("%ld", &newProduct.price);
	
	printf("Note: ");
	scanf("%s", &newProduct.note);
	
	product[productCount++] = newProduct;

	FILE *file = fopen("ProductList.txt", "a");
	if(file== NULL) 
	{
		printf("Cant open file ProductList.txt!!!.\n");
		return;
	}
	//Ghi file
	fprintf(file, "%s %s %s %d %ld %s\n",
	        newProduct.idCategory,
	        newProduct.idProduct,
	        newProduct.nameProduct,
	        newProduct.slots,
	        newProduct.price,
	        newProduct.note);

	fclose(file);

	printf(BGRN "Success!\n" reset);
}
void removeProduct_3(char idcategory[4]) 
{
    char removeID[5];
    int choice;
    printf("%5sREMOVE PRODUCT:\n", "");
    printf("%3sPlease input ID Product to remove: ", "");
    scanf("%4s", removeID);
    getchar();

    int foundProduct=-1;
    for (int i=0; i<productCount; i++) 
	{
		if (strcmp(product[i].idCategory, idcategory)==0)
		{
			if (strcmp(product[i].idProduct, removeID)==0) 
			{
	            foundProduct=i;
	            break;
	        }
		}
    }

    if (foundProduct==-1) 
	{
        printf(BRED "%4sProduct ID not found!\n" reset, "");
        return;
    }

    printf("%3sAre you sure you want to remove this product?\n", "");
    printf("%4s[0] No%10s[1] Yes\n", "", "");
    printf("%4sChoice?? :", "");
    scanf("%d", &choice);

    if (choice == 1) 
	{
        // X�a san pham trong mang
        for (int j=foundProduct; j<productCount - 1; j++) 
		{
            product[j]=product[j+1];
        }
        productCount--;

        // Ghi danh sach moi vao ProdcutList.txt
        FILE *file = fopen("ProductList.txt", "w");
        if (file) 
		{
            for (int i=0; i<productCount; i++) 
			{
                fprintf(file, "%s %s %s %d %lld %s\n",
                        product[i].idCategory,
                        product[i].idProduct,
                        product[i].nameProduct,
                        product[i].slots,
                        product[i].price,
                        product[i].note);
            }
            fclose(file);
        }

        printf(BGRN "Product removed successfully!\n" reset);
    } else {
        printf(BRED "Product remove cancelled!\n" reset);
    }
}
void editProduct_2(char idcategory[4]) 
{
    char editID[5];
    int found = 0;
    
    printf("%5sEDIT PRODUCT:\n", "");
    printf("%3sPlease input ID Product to edit: ", "");
    scanf("%4s", editID);
    getchar(); 
    
    for (int i = 0; i < productCount; i++) 
	{
		if (strcmp(product[i].idCategory, idcategory)==0)
		{
			if (strcmp(product[i].idProduct, editID) == 0) 
			{
	            found = 1;
	
	            printf("\nCurrent Product Info:\n");
	            printf("ID: %s\n", product[i].idProduct);
	            printf("Name: %s\n", product[i].nameProduct);
	            printf("Slots: %d\n", product[i].slots);
	            printf("Price: %lld\n", product[i].price);
	            printf("Note: %s\n", product[i].note);
	
	            printf("\nEnter new details (Press Enter to keep old values):\n");
	
	            printf("New Name: ");
	            char newName[100];
	            fgets(newName, sizeof(newName), stdin);
				if (newName[0] != '\n') 
				{
				    newName[strcspn(newName, "\n")] = '\0'; 
				    
				    // thay space bang "_"
				    for (int j = 0; newName[j] != '\0'; j++) 
					{
				        if (newName[j] == ' ') 
						{
				            newName[j] = '_';
				        }
				    }
				
				    strcpy(product[i].nameProduct, newName);
				}
				
	            printf("New Slots: ");
	            char newSlots[10];
	            fgets(newSlots, sizeof(newSlots), stdin);
	            if (newSlots[0] != '\n') 
				{
	                product[i].slots = atoi(newSlots);
	            }
	
	            printf("New Price: ");
	            char newPrice[20];
	            fgets(newPrice, sizeof(newPrice), stdin);
	            if (newPrice[0] != '\n')
				{
	                product[i].price = atoll(newPrice);
	            }
	
	            printf("New Note: ");
	            char newNote[50];
	            fgets(newNote, sizeof(newNote), stdin);
	            if (newNote[0] != '\n') 
				{
	                newNote[strcspn(newNote, "\n")] = '\0'; 
	                strcpy(product[i].note, newNote);
	            }
	
	            // save to file productlist.txt
	            FILE *file = fopen("ProductList.txt", "w");
	            if (!file) 
				{
	                printf(BRED "Error: Cannot open ProductList.txt!\n" reset);
	                return;
	            }
	            for (int j = 0; j < productCount; j++) 
				{
	                fprintf(file, "%s %s %s %d %lld %s\n",
	                        product[j].idCategory,
	                        product[j].idProduct,
	                        product[j].nameProduct,
	                        product[j].slots,
	                        product[j].price,
	                        product[j].note);
	            }
	            fclose(file);
	
	            printf(BGRN "Product updated successfully!\n" reset);
	            return;
	        }
		}   
    }

    if (!found) 
	{
        printf(BRED "Product ID not found!\n" reset);
    }
}
void sortProductsByNameA_5(char idcategory[4]) 
{
    PRODUCT tempList[productCount]; 
    int count = 0;

    //luu cac san pham thuoc danh muc  vao mang tam thoi
    for (int i = 0; i < productCount; i++) 
    {
        if (strcmp(product[i].idCategory, idcategory) == 0) 
        {
            tempList[count++] = product[i];
        }
    }

    // sap xep tang dan
    for (int i = 0; i < count - 1; i++) 
    {
        for (int j = 0; j < count - i - 1; j++) 
        {
            if (strcmp(tempList[j].nameProduct, tempList[j + 1].nameProduct) > 0) 
            {
                PRODUCT temp = tempList[j];
                tempList[j] = tempList[j + 1];
                tempList[j + 1] = temp;
            }
        }
    }

    // Cap nhat ds chinh
    int index = 0;
    for (int i = 0; i < productCount; i++) 
    {
        if (strcmp(product[i].idCategory, idcategory) == 0) 
        {
            product[i] = tempList[index++];
        }
    }
}
void sortProductsByNameD_5(char idcategory[4]) 
{
    PRODUCT tempList[productCount]; 
    int count = 0;

    //luu cac san pham thuoc danh muc  vao mang tam thoi
    for (int i = 0; i < productCount; i++) 
    {
        if (strcmp(product[i].idCategory, idcategory) == 0) 
        {
            tempList[count++] = product[i];
        }
    }

    //Sap xep giam dan bubler sort 
    for (int i = 0; i < count - 1; i++) 
    {
        for (int j = 0; j < count - i - 1; j++) 
        {
            if (strcmp(tempList[j].nameProduct, tempList[j + 1].nameProduct) < 0) 
            {
                PRODUCT temp = tempList[j];
                tempList[j] = tempList[j + 1];
                tempList[j + 1] = temp;
            }
        }
    }
	//
    //Cap nhat len mang chinh
    int index = 0;
    for (int i = 0; i < productCount; i++) 
    {
        if (strcmp(product[i].idCategory, idcategory) == 0) 
        {
            product[i] = tempList[index++];
        }
    }
}
	
void sortProductsByPriceA_4(char idcategory[4]) 
{
    PRODUCT tempList[productCount]; //mang tam thoi chua product thuoc idcategory
    int count = 0;

    //luu cac san pham thuoc danh muc  vao mang tam thoi
    for (int i = 0; i < productCount; i++) 
    {
        if (strcmp(product[i].idCategory, idcategory) == 0) 
        {
            tempList[count++] = product[i];
        }
    }

    //  Sap xep mang tam thoi 
    for (int i = 0; i < count - 1; i++) 
    {
        for (int j = 0; j < count - i - 1; j++) 
        {
            if (tempList[j].price > tempList[j + 1].price) 
            {
                PRODUCT temp = tempList[j];
                tempList[j] = tempList[j + 1];
                tempList[j + 1] = temp;
            }
        }
    }

    // cap nhat len mang chinh
    int index = 0;
    for (int i = 0; i < productCount; i++) 
    {
        if (strcmp(product[i].idCategory, idcategory) == 0) 
        {
            product[i] = tempList[index++];
        }
    }
}

void sortProductsByPriceD_4(char idcategory[4]) 
{
    PRODUCT tempList[productCount]; 
    int count = 0;

    // tao danh muc tam thoi
    for (int i = 0; i < productCount; i++) 
    {
        if (strcmp(product[i].idCategory, idcategory) == 0) 
        {
            tempList[count++] = product[i];
        }
    }

    // Sap xep giam dan
    for (int i = 0; i < count - 1; i++) 
    {
        for (int j = 0; j < count - i - 1; j++) 
        {
            if (tempList[j].price < tempList[j + 1].price) 
            {
                PRODUCT temp = tempList[j];
                tempList[j] = tempList[j + 1];
                tempList[j + 1] = temp;
            }
        }
    }

     // cap nhat len mang chinh
    int index = 0;
    for (int i = 0; i < productCount; i++) 
    {
        if (strcmp(product[i].idCategory, idcategory) == 0) 
        {
            product[i] = tempList[index++];
        }
    }
}

void searchProductByName_6(const char *searchName, char idcategory[4]) 
{
	system("cls");
    int found = 0;
    printf("%3s|======================================================================================|\n", "");
	printf("%3s|%35sSearching %-41s|\n", "", "", searchName);
	printf("%3s|======================================================================================|\n", "");
	printf("%3s|%3sID%3s|%13sName%13s|%2sSlots%2s|%5sPrice%5s|%8sNote%8s|\n", "", "", "", "", "", "", "", "", "", "", "");
	printf("%3s|======================================================================================|\n", "");
	{
		for (int i = 0; i < productCount; i++) 
		{
	        if (strstr(product[i].nameProduct, searchName) != NULL && strcmp(product[i].idCategory, idcategory)==0) 
			{ 
	            printf("%3s|%2s%-6s|%2s%-28s|%2s%-7d|%2s%-13ld|%2s%-18s|\n", "",
				       "", product[i].idProduct,
				       "", product[i].nameProduct,
				       "", product[i].slots,
				       "", product[i].price,
				       "", product[i].note);
				printf("%3s|======================================================================================|\n", "");
	            found = 1;
	        }
	    }
	    if (!found) 
		{
	        printf("%3s|\e[1;31m%36sCant find \"%s\"%37s\e[0m|\n", "", "", searchName, "");
	        printf("%3s|======================================================================================|\n", "");
	    }
	}  
}
/////////////////////////////////////////////////////////////////////////////////////////
int main() {
	Authentication();//authnti acount admin
	int choice;
	char idCategory[5];
	loadCategories();
	loadProduct();

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
	printf("%8sEnter The Choice:", "");
	scanf("%d", &choice);
	switch(choice) {
		case 1: {
			system("cls");
			showCategoryList_1();
			printf(BYEL "%4s[0] Back %5s [1] Edit product in category\n" reset, "", "");
			do {
				printf("%4sEnter The Choice:", "");
				scanf("%d", &choice);
			} while(choice<0||choice>1);

			if(choice==0) {
				system("cls");
				goto categoryMenu;
			} else {
				printf("Choose your list product in category: ");
				scanf("%4s", idCategory);
				system("cls");
				getchar();

				int flag = -1;
				for (int i = 0; i<categoryCount; i++) {
					if (strcmp(categories[i].idCategory, idCategory)==0) {
						flag=i;
						break;
					}
				}
				if (flag==-1) {
					printf(BRED "Category ID not found!\n" reset);
					goto categoryMenu;
					break;
				}
				displayProduct(idCategory);
productMenu:
				
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
				printf("%8sEnter The Choice:", "");
				scanf("%d", &choice);
				switch (choice) {
					case 1: 
						{
							addProduct_1(idCategory);
							goto productMenu;
							break;
						}
					case 2:
						{
							editProduct_2(idCategory);
							goto productMenu;
							break;	
						}
					case 3:
						{
							removeProduct_3(idCategory);
							goto productMenu;
							break;
						}
					case 4:
						{
							printf("%5s[1] Sort in ascending order.\n", "");
							printf("%5s[2] Sort in descending order.\n", "");
							printf("%5s[0] Back menu.\n", "");
							printf("%5sChoice: ", "");
							do
							{
								scanf("%d", &choice);
							}while(choice<0||choice>2);
							system("cls");
							if(choice==1) sortProductsByPriceA_4(idCategory);
							else if(choice==2) sortProductsByPriceD_4(idCategory);
							else if(choice==0) goto categoryMenu;
							displayProduct(idCategory);
							goto productMenu;
							break; 
						}
					case 5:
						{
							printf("%5s[1] Sort in ascending order.\n", "");
							printf("%5s[2] Sort in descending order.\n", "");
							printf("%5s[0] Back menu.\n", "");
							printf("%5sChoice: ", "");
							do
							{
								scanf("%d", &choice);
							}while(choice<0||choice>2);
							system("cls");
							if(choice==1) sortProductsByNameA_5(idCategory);
							else if(choice==2) sortProductsByNameD_5(idCategory);
							else if(choice==0) goto categoryMenu;
							displayProduct(idCategory);
							goto productMenu;
							break; 
						}
					case 6:
						{
							char searchName[100];
							printf("Input name to search: ");
						    getchar();
							fgets(searchName, 100, stdin);
							searchName[strcspn(searchName, "\n")] = 0;
						    searchProductByName_6(searchName, idCategory);
							goto productMenu;
							break;
						}
					case 7: 
						{
							system("cls");
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
						system("cls");
						printf(BRED "%5sVui long nhap lai [0-7]!!\n" reset, "");
						goto productMenu;
						break;
				}
			}
			goto categoryMenu;
			break;
		}
		case 2: {
			addCategory_2();
			goto categoryMenu;
		}
		case 3: {
			editCategory_3();
			goto categoryMenu;
			break;
		}
		case 4: {
			removeCategory_4();
			goto categoryMenu;
			break;
		}
		case 5: {
			searchCategory_5();
			goto categoryMenu;
			break;
		}
		case 6: {
			printf("%5s[1] Sort in ascending order.\n", "");
			printf("%5s[2] Sort in descending order.\n", "");
			printf("%5s[0] Back menu.\n", "");
			printf("%5sChoice: ", "");
			scanf("%d", &choice);
			system("cls");
			if(choice==1) sortCategoriesA_6();
			else if(choice==2) sortCategoriesD_6();
			else goto categoryMenu;
			goto categoryMenu;
			break;
		}
		case 7: {
			system("cls");
			checkCategoryData_7();
			goto categoryMenu;
			break;
		}
		case 8: {
			system("cls");
			saveCategories_8();
			printf(BGRN "Categories saved successfully!\n" reset);
			goto categoryMenu;
			break;
		}
		case 0: {
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
