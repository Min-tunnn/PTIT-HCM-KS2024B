#include <stdio.h>
int main() {
    float a, b, c;
    printf("Nhap canh thu nhat: ");
    scanf("%f", &a);
    printf("Nhap canh thu: ");
    scanf("%f", &b);
    printf("Nhap canh thu ba: ");
    scanf("%f", &c);
    if (a>0&&b>0&&c>0&&(a+b>c)&&(a+c>b)&&(b+c> a)) {
        printf("Là 3 canh tam giacc\n");
    } else {
        printf("Không phai 3 canh tam giac");
    }

    return 0;
}

