#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SInhVien 100
#define MAX_TK 100

typedef struct 
{
    int id;
    char name[50];
    int age;
} Student;

typedef struct 
{
    char username[50];
    char password[50];
} Account;

Student students[MAX_SInhVien];
int studentCount =0;

Account accounts[MAX_TK];
int accountCount=0;

void loadStudentsFromFile() {
    FILE *file=fopen("students.dat", "rb");
    if (file) 
	{
        studentCount=fread(students, sizeof(Student), MAX_SInhVien, file);
        fclose(file);
    }
}

void saveStudentsToFile() 
{
    FILE *file=fopen("students.dat", "wb");
    if (file) {
        fwrite(students, sizeof(Student), studentCount, file);
        fclose(file);
    }
}

void loadAccountsFromFile() 
{
    FILE *file=fopen("students.dat", "rb");
    if (file) 
	{
        accountCount=fread(accounts, sizeof(Account), MAX_TK, file);
        fclose(file);
    }
}

void saveAccountsToFile() 
{
    FILE *file=fopen("students.dat", "wb");
    if (file) 
	{
        fwrite(accounts, sizeof(Account), accountCount, file);
        fclose(file);
    }
}

void registerAccount() 
{
    if (accountCount>=MAX_TK) 
	{
        printf("Danh sach tai khoan da day!\n");
        return;
    }
    
    Account acc;
    char confirmPassword[50];
    
    printf("Nhap tai khoan: "); scanf("%s", acc.username);
    
    for (int i=0; i<accountCount; i++) 
	{
        if (strcmp(accounts[i].username, acc.username)==0) 
		{
            printf("Tai khoan da ton tai! Hay thu lai.\n");
            return;
        }
    }
    
    printf("Nhap mat khau: "); scanf("%s", acc.password);
    printf("Xac nhan mat khau: "); scanf("%s", confirmPassword);
    
    if (strcmp(acc.password, confirmPassword) != 0) 
	{
        printf("Mat khau xac nhan khong khop! Hay thu lai.\n");
        return;
    }
    
    accounts[accountCount++]=acc;
    saveAccountsToFile();
    printf("Dang ky thanh cong!\n");
}

void login() 
{
    char username[50], password[50];
    printf("Nhap tai khoan: "); scanf("%s", username);
    printf("Nhap mat khau: "); scanf("%s", password);
    
    for (int i=0; i<accountCount; i++) {
        if (strcmp(accounts[i].username, username) == 0 && strcmp(accounts[i].password, password)==0) 
		{
            printf("Dang nhap thanh cong!\n");
            return;
        }
    }
    printf("Dang nhap that bai!\n");
}

int main() {
    loadStudentsFromFile();
    loadAccountsFromFile();
    int choice;
    
    do {
        printf("MENU\n");
        printf("1. Dang nhap\n");
        printf("2. Dang ky\n");
        printf("3. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: login(); break;
            case 2: registerAccount(); break;
            case 3: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choice != 3);
    
    return 0;
}

