#include <stdio.h>

int main() {
    FILE *f;
    char str[100];

    
    f = fopen("bt01.txt", "a");
    if (f == NULL) {
        printf("Mo tep that bai!\n");
        return 1;
    }
    printf("Nhap chuoi muon gi them vao: ");
    fgets(str, 100, stdin);//100~sizeof(str)
    fprintf(f, "%s", str);
    fclose(f);
    return 0;
}

