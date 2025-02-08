#include <stdio.h>

int main() {
    FILE *f;
    char str[100];

    
    f = fopen("bt02.txt", "w");
    if (f == NULL) {
        printf("Mo tep that bai!\n");
        return 1;
    }
    printf("Nhap chuoi bat ki: ");
    fgets(str, 100, stdin);//100~sizeof(str)
    fprintf(f, "%s", str);
    fclose(f);
    //doc ki tu dau
    
    f = fopen("bt01.txt", "r");
    if (f == NULL) {
        printf("Mo tep that bai!\n");
        return 1;
    }
    

    printf("Ky tu dau tien: %c\n", fgetc(f));
    
    fclose(f);
    return 0;
}

