#include <stdio.h>

int main() {
    FILE *f;
    char str[100], line[100];

    
    f = fopen("bt01.txt", "w");
    if (f == NULL) {
        printf("Mo tep that bai!\n");
        return 1;
    }
    printf("Nhap chuoi bat ki: ");
    fgets(str, 100, stdin);//100~sizeof(str)
    fprintf(f, "%s", str);
    fclose(f);
    //doc dòn dau tien
    f =fopen("bt01.txt", "r");
    if (fgets(line, sizeof(line), f)!=NULL) printf("Dong dau tien: %s", line);
    else return 1;

    fclose(f);
    return 0;
}

