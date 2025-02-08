#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct Book 
{
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

void displayBooks(struct Book books[], int count) 
{
    printf("\nDanh sach sach:\n");
    for (int i=0; i<count; i++) 
	{
        printf("Ma sach: %s, Ten sach: %s, Tac gia: %s, Gia: %.2f, The loai: %s\n",
               books[i].id, books[i].title, books[i].author, books[i].price, books[i].category);
    }
}

void addBookAtPosition(struct Book books[], int *count) 
{
    if (*count>=MAX) 
	{
        printf("Khong the them sach, danh sach day!\n");
        return;
    }
    int pos;
    printf("Nhap vi tri muon them (0 - %d): ", *count);
    scanf("%d", &pos);
    if (pos<0 || pos>*count) 
	{
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i=*count; i>pos; i--) 
	{
        books[i]=books[i-1];
    }
    printf("Nhap thong tin sach moi:\n");
    printf("Ma sach: ");
    scanf("%s", books[pos].id);
    printf("Ten sach: ");
    scanf(" %[^"]s", books[pos].title);
    printf("Tac gia: ");
    scanf(" %[^"]s", books[pos].author);
    printf("Gia tien: ");
    scanf("%f", &books[pos].price);
    printf("The loai: ");
    scanf(" %[^"]s", books[pos].category);
    (*count)++;
    printf("Them sach thanh cong!\n");
}

void deleteBookById(struct Book books[], int *count) 
{
    char id[20];
    printf("Nhap ma sach can xoa: ");
    scanf("%s", id);
    for (int i=0; i<*count; i++) 
	{
        if (strcmp(books[i].id, id)==0) 
		{
            for (int j=i; j<*count-1; j++) 
			{
                books[j]=books[j+1];
            }
            (*count)--;
            printf("Xoa sach thanh cong!\n");
            return;
        }
    }
    printf("Khong tim thay ma sach!\n");
}

int main() 
{
    struct Book books[MAX];
    int count=0;
    int choice;
    
    do {
        printf("\nMENU\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Hien thi thong tin sach\n");
        printf("3. Them sach vao vi tri\n");
        printf("4. Xoa sach theo ma sach\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice) 
		{
            case 1:
                enterBooks(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                addBookAtPosition(books, &count);
                break;
            case 4:
                deleteBookById(books, &count);
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

