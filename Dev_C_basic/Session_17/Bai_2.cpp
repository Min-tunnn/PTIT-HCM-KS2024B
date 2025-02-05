#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void nhapChuoi(char **str) 
{
    char temp[1000];
    printf("Nhap vao  chuoi: ");
    getchar(); 
    fgets(temp, sizeof(temp), stdin);
    temp[strcspn(temp, "\n")] = 0;
    *str=(char*)malloc((strlen(temp) + 1)*sizeof(char));
    strcpy(*str, temp);
}

void inChuoi(char *str) 
{
    if (str)
        printf("Chuoi da nhap: %s\n", str);
    else
        printf("Chua co du  lieu!\n");
}

int demChuCai(char *str) 
{
    int count = 0;
    while (*str) {
        if (isalpha(*str)) count++;
        str++;
    }
    return count;
}

int demChuSo(char *str) 
{
    int count = 0;
    while (*str) {
        if (isdigit(*str)) count++;
        str++;
    }
    return count;
}

int demKyTuDacBiet(char *str) {
    int count = 0;
    while (*str) 
    {
        if (!isalnum(*str)&&!isspace(*str)) count++;
        str++;
    }
    return count;
}

int main() 
{
    char *str=NULL;
    int choice;
    
    do 
    {
        printf("\nMENU\n");
        printf("1. Nhap chuoi\n");
        printf("2. In chuoi\n");
        printf("3. So luong chu cai\n");
        printf("4. So luong chu so\n");
        printf("5. So luong ki tu dac biet\n");
        printf("6. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                nhapChuoi(&str);
                break;
            case 2:
                inChuoi(str);
                break;
            case 3:
                printf("So luong chu cai: %d\n", demChuCai(str));
                break;
            case 4:
                printf("So luong chu so: %d\n", demChuSo(str));
                break;
            case 5:
                printf("So luong ki  tu dac biet: %d\n", demKyTuDacBiet(str));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice!=6);

    free(str);
    return 0;
}

