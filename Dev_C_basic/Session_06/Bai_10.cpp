#include <stdio.h>

int main() {
    int soNhap, soNto=1;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &soNhap);

    if (soNhap <= 1) {
        soNto=0;
    } 
    else 
    {
        for (int i = 2; i <=soNhap/2; i++) 
        {
            if (soNhap%i==0) 
            {
                soNto =0;
                break;
        }
    }
    if (soNto) 
    {
        printf("%d la so nguyen to.\n", soNhap);
    } 
    else 
    {
        printf("%d khong phai la so nguyen to.\n", soNhap);
    }
    return 0;
    }
}
