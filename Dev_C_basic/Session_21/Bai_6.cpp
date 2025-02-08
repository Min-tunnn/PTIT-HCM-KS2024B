#include <stdio.h>

int main() {
    FILE *f06, *f01;
    char str[256];
    //f_bt06
    f06 = fopen("bt06.txt", "w");
    if (f06 == NULL) {
        printf("Mo tep bt06 that bai!\n");
        return 1;
    }
    //f_bt01
    f01 = fopen("bt01.txt", "r");
    if (f01 == NULL) {
        printf("Mo tep bt01 that bai!\n");
        return 1;
    }
    while (fgets(str, sizeof(str), f01) != NULL) {
        fputs(str, f06);  // Ghi dòng vào bt06.txt
    }
    fclose(f01);
    fclose(f06);
    return 0;
}

