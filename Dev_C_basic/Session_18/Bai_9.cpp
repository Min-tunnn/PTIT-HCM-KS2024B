#include <stdio.h>
#include <string.h>

#define MAX_MENU_SIZE 100

struct MonAn{
    int id;
    char name[50];
    float price;
};

struct MonAn menu[MAX_MENU_SIZE]={
    {1, "Mon an 1", 15.5},
    {2, "Mon an 2", 20.0},
    {3, "Mon an 3", 10.0},
    {4, "Mon an 4", 25.0},
    {5, "Mon an 5", 18.0}
};

void inMenu(struct MonAn menu[], int n) 
{
    for (int i=0; i<n; i++) 
	{
        printf("%d. Ten: %s, Gia: %.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }
}

void themMonAn(struct MonAn menu[], int *n) 
{
    int viTri;
    if (*n<MAX_MENU_SIZE) 
	{
        printf("Nhap vi tri de them (0 den %d): ", *n);
        scanf("%d", &viTri);
        if (viTri<0 || viTri>*n) 
		{
            printf("Vi tri khong hop le!\n");
            return;
        }

        printf("Nhap id mon an: ");
        scanf("%d", &menu[viTri].id);
        printf("Nhap ten mon an: ");
        getchar(); 
        fgets(menu[viTri].name, 50, stdin);
        menu[viTri].name[strcspn(menu[viTri].name, "\n")] = 0; 
        printf("Nhap gia mon an: ");
        scanf("%f", &menu[viTri].price);

        (*n)++;
    }else 
	{
        printf("Menu da day.\n");
    }
}

void suaMonAn(struct MonAn menu[], int n) 
{
    int viTri;
    printf("Nhap vi tri de sua (0-%d): ", n - 1);
    scanf("%d", &viTri);
    if (viTri<0 ||viTri>=n) 
	{
        printf("Vi tri khong hop le!\n");
        return;
    }

    printf("Nhap ten mon an moi: ");
    getchar();
    fgets(menu[viTri].name, 50, stdin);
    menu[viTri].name[strcspn(menu[viTri].name, "\n")] = 0;
    printf("Nhap gia mon an moi: ");
    scanf("%f", &menu[viTri].price);
}


void xoaMonAn(struct MonAn menu[], int *n) 
{
    int viTri;
    printf("Nhap vi tri de xoa (0-%d): ", *n-1);
    scanf("%d", &viTri);
    if (viTri<0 || viTri>=*n) 
	{
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (int i=viTri; i<*n-1; i++) 
	{
        menu[i]=menu[i + 1];
    }
    (*n)--;
}

void sapXepMenuGiamDan(struct MonAn menu[], int n) 
{
    struct MonAn temp;
    for (int i=0; i<n-1; i++) 
	{
        for (int j=i+1; j<n; j++) 
		{
            if (menu[i].price<menu[j].price) 
			{
                temp = menu[i];
                menu[i] = menu[j];
                menu[j] = temp;
            }
        }
    }
}

void sapXepMenuTangDan(struct MonAn menu[], int n) {
    struct MonAn temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (menu[i].price > menu[j].price) {
                temp = menu[i];
                menu[i] = menu[j];
                menu[j] = temp;
            }
        }
    }
}

void timKiemMonAnTuyenTinh(struct MonAn menu[], int n, char name[]) 
{
    int found = 0;
    for (int i = 0; i < n; i++) 
	{
        if (strstr(menu[i].name, name)!=NULL) 
		{
            printf("Tim thay: %d. Ten: %s, Gia: %.2f\n", menu[i].id, menu[i].name, menu[i].price);
            found = 1;
        }
    }
    if (!found) 
	{
        printf("Khong tim thay mon an %s.\n", name);
    }
}

int timKiemMonAnNhiPhan(struct MonAn menu[], int n, char name[]) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int cmp = strcmp(menu[mid].name, name);
        if (cmp == 0) {
            return mid;
        } else if (cmp < 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int luaChon, n = 5;
    char name[50];
    
    while (1) {
        printf("\nMENU\n");
        printf("1. In tat ca mon an\n");
        printf("2. Them mon an\n");
        printf("3. Sua mon an\n");
        printf("4. Xoa mon an\n");
        printf("5. Sap xep mon an\n");
        printf("6. Tim kiem mon an\n");
        printf("7. Thoat\n");
        printf("Chon: ");
        scanf("%d", &luaChon);
        
        switch (luaChon) {
            case 1:
                inMenu(menu, n);
                break;
            case 2:
                themMonAn(menu, &n);
                break;
            case 3:
                suaMonAn(menu, n);
                break;
            case 4:
                xoaMonAn(menu, &n);
                break;
            case 5:
                {
                    int luaChonCon;
                    printf("5. Sap xep mon an\n");
                    printf("a. Tien (giam dan)\n");
                    printf("b. Tien (Tang dan)\n");
                    printf("Chon: ");
                    getchar(); 
                    scanf("%c", &luaChonCon);
                    
                    if (luaChonCon == 'a') {
                        sapXepMenuGiamDan(menu, n);
                        inMenu(menu, n);
                    } else if (luaChonCon == 'b') {
                        sapXepMenuTangDan(menu, n);
                        inMenu(menu, n);
                    } else {
                        printf("Tuy chon khong hop le!\n");
                    }
                }
                break;
            case 6:
                {
                    int luaChonTimKiem;
                    printf("6. Tim kiem mon an\n");
                    printf("a. Tim kiem tuyen tinh\n");
                    printf("b. Tim kiem nhi phan\n");
                    printf("Chon: ");
                    getchar(); 
                    scanf("%c", &luaChonTimKiem);
                    
                    if (luaChonTimKiem == 'a') {
                        printf("Nhap ten mon an de tim: ");
                        getchar(); 
                        fgets(name, 50, stdin);
                        name[strcspn(name, "\n")] = 0;
                        timKiemMonAnTuyenTinh(menu, n, name);
                    } else if (luaChonTimKiem == 'b') {
                        printf("Nhap ten mon an de tim: ");
                        getchar(); 
                        fgets(name, 50, stdin);
                        name[strcspn(name, "\n")] = 0;
                        int result = timKiemMonAnNhiPhan(menu, n, name);
                        if (result != -1) {
                            printf("Tim thay: %d. Ten: %s, Gia: %.2f\n", menu[result].id, menu[result].name, menu[result].price);
                        } else {
                            printf("Khong tim thay mon an %s.\n", name);
                        }
                    } else {
                        printf("Tuy chon khong hop le!\n");
                    }
                }
                break;
            case 7:
                printf("Thoat...\n");
                return 0;
            default:
                printf("Tuy chon khong hop le!\n");
        }
    }
    
    return 0;
}

