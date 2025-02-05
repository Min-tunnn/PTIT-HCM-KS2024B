#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void nhapChuoi(char **str) {
    char temp[1000];
    printf("Nhap vao chuoi: ");
    getchar(); 
    fgets(temp, sizeof(temp), stdin);
    temp[strcspn(temp, "\n")] = 0;
    *str = (char*)malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(*str, temp);
}

void inChuoiDaoNguoc(char *str) {
    if (str) {
        int len = strlen(str);
        printf("Chuoi dao nguoc: ");
        for (int i = len - 1; i >= 0; i--) {
            putchar(str[i]);
        }
        printf("\n");
    } else {
        printf("Chua co du lieu!!!\n");
    }
}

int demTuTrongChuoi(char *str) {
    int count = 0;
    char *token = strtok(str, " ");
    while (token) {
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}

void soSanhChuoi(char *str) {
    if (!str) {
        printf("Chua co du lieu!!!\n");
        return;
    }
    char temp[1000];
    printf("Nhap vao chuoi khac de so sanh: ");
    getchar();
    fgets(temp, sizeof(temp), stdin);
    temp[strcspn(temp, "\n")] = 0;
    int len1 = strlen(str);
    int len2 = strlen(temp);
    printf("Chuoi moi va chuoi ban dau: \n", len2 > len1 ? "dai hon" : "ngan hon");
}

void inHoaChuoi(char *str) {
    if (!str) {
        printf("Chua co du lieu!!\n");
        return;
    }
    printf("Chuoi in hoa: ");
    while (*str) {
        putchar(toupper(*str));
        str++;
    }
    printf("\n");
}

void noiChuoi(char **str) {
    if (!(*str)) {
        printf("Chua co du lieu!!\n");
        return;
    }
    char temp[1000];
    printf("Nhap vao chuoi de noi: ");
    getchar();
    fgets(temp, sizeof(temp), stdin);
    temp[strcspn(temp, "\n")] = 0;
    *str = (char*)realloc(*str, strlen(*str) + strlen(temp) + 2);
    strcat(*str, " ");
    strcat(*str, temp);
}

int main() {
    char *str = NULL;
    int choice;
    
    do {
        printf("\nMENU\n");
        printf("1. Nhap chhuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong phan tu trong chuoi\n");
        printf("4. Nhap vao chuoi moi, ss chuoi ban dau\n");
        printf("5. In hoa tat ca\n");
        printf("6. Nhap vao chuoi khac in ra chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapChuoi(&str);
                break;
            case 2:
                inChuoiDaoNguoc(str);
                break;
            case 3:
                printf("So luong phan tu: %d\n", demTuTrongChuoi(str));
                break;
            case 4:
                soSanhChuoi(str);
                break;
            case 5:
                inHoaChuoi(str);
                break;
            case 6:
                noiChuoi(&str);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Vui long nhap lai lua chon (1-7)\n");
        }
    } while (choice != 7);

    free(str);
    return 0;
}

