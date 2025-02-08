#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


struct Product 
{
    char id[20];
    char name[100];
    float importPrice;
    float salePrice;
    int quantity;
};

struct Product products[MAX];
int productCount = 0;
float revenue = 0;

void enterProducts() 
{
    printf("Nhap so luong san pham: ");
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) 
	{
        struct Product p;
        printf("Nhap thong tin san pham %d:\n", i+1);
        printf("Ma san pham: ");
        scanf("%s", p.id);
        printf("Ten san pham: ");
        scanf(" %[^"]s", p.name);
        printf("Gia nhap: ");
        scanf("%f", &p.importPrice);
        printf("Gia ban: ");
        scanf("%f", &p.salePrice);
        printf("So luong: ");
        scanf("%d", &p.quantity);
        
        int exists=0;
        for (int j=0; j<productCount; j++) 
		{
            if (strcmp(products[j].id, p.id)==0) 
			{
                products[j].quantity+=p.quantity;
                exists=1;
                break;
            }
        }
        if (!exists&&productCount<MAX) 
		{
            products[productCount++]=p;
        }
        revenue-=p.importPrice *p.quantity;
    }
}

void displayProducts() 
{
    printf("\nDanh sach san pham:\n");
    for (int i = 0; i < productCount; i++) 
	{
        printf("Ma: %s, Ten: %s, Gia nhap: %.2f, Gia ban: %.2f, So luong: %d\n",
               products[i].id, products[i].name, products[i].importPrice,
               products[i].salePrice, products[i].quantity);
    }
}

void sellProduct() 
{
    char id[20];
    int sellQuantity;
    printf("Nhap ma san pham can ban: ");
    scanf("%s", id);
    printf("Nhap so luong can ban: ");
    scanf("%d", &sellQuantity);
    
    for (int i=0; i<productCount; i++) 
	{
        if (strcmp(products[i].id, id)==0) 
		{
            if (products[i].quantity==0) 
			{
                printf("Het hang!\n");
                return;
            }
            if (sellQuantity>products[i].quantity) 
			{
                printf("Khong con du hang!\n");
                return;
            }
            products[i].quantity-=sellQuantity;
            revenue += sellQuantity * products[i].salePrice;
            printf("Ban thanh cong!\n");
            return;
        }
    }
    printf("Khong tim thay san pham!\n");
}

void showRevenue() 
{
    printf("Doanh thu hien tai: %.2f\n", revenue);
}

int main() 
{
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so luong va thong tin san pham\n");
        printf("2. Hien thi danh sach san pham\n");
        printf("3. Ban san pham\n");
        printf("4. Doanh thu hien tai\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice) 
		{
            case 1:
                enterProducts();
                break;
            case 2:
                displayProducts();
                break;
            case 3:
                sellProduct();
                break;
            case 4:
                showRevenue();
                break;
            case 5:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice!=5);
    
    return 0;
}

