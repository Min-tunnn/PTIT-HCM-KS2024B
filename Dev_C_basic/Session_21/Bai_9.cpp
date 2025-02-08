#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct Book {
    char id[20];
    char title[100];
    char author[100];
    float price;
    char category[50];
};

void enterBooks(struct Book books[], int *count) 
{
    printf("Nhap so luong sach: ");
    scanf("%d", count);
    for (int i=0; i<*count; i++) 
	{
        printf("Nhap thong tin sach %d:\n", i+1);
        printf("Ma sach: ");
        scanf("%s", books[i].id);
        printf("Ten sach: ");
        scanf(" %[^"]s", books[i].title);
        printf("Tac gia: ");
        scanf(" %[^"]s", books[i].author);
        printf("Gia tien: ");
        scanf("%f", &books[i].price);
        printf("The loai: ");
        scanf(" %[^"]s", books[i].category);
    }
}

void saveBooksToFile(struct Book books[], int count) 
{
    FILE *file = fopen("books.dat", "wb");
    if (file==NULL) 
	{
        printf("Khong the mo file!\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, file);
    fwrite(books, sizeof(struct Book), count, file);
    fclose(file);
    printf("Luu thong tin thanh cong!\n");
}

void loadBooksFromFile(struct Book books[], int *count) 
{
    FILE *file = fopen("books.dat", "rb");
    if (file==NULL) {
        printf("Khong the mo file!\n");
        return;
    }
    fread(count, sizeof(int), 1, file);
    fread(books, sizeof(struct Book), *count, file);
    fclose(file);
    printf("Doc thonog tin sach thanh cong!\n");
}

void displayBooks(struct Book books[], int count) 
{
    printf("\nLLIST SACH:\n");
    for (int i=0; i<count; i++) 
	{
        printf("Ma sach: %s, Ten sach: %s, Tac gia: %s, Gia: %.2f, The loai: %s\n",
        books[i].id, books[i].title, books[i].author, books[i].price, books[i].category);
    }
}

int main() {
    struct Book books[MAX];
    int count = 0;
    int choice;
    
    do {
        printf("\nMENU\n");
        printf("1. Nhap so luong sach\n");
        printf("2. Luu thong tin sach vao file\n");
        printf("3. Lay thong tin sach tu file\n");
        printf("4. Hien thi thong tin sach\n");
        printf("5. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);
        
        switch (choice) 
		{
            case 1:
                enterBooks(books, &count);
                break;
            case 2:
                saveBooksToFile(books, count);
                break;
            case 3:
                loadBooksFromFile(books, &count);
                break;
            case 4:
                displayBooks(books, count);
                break;
            case 5:
                printf("Thoat!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    }while(choice!=5);
    return 0;
}

