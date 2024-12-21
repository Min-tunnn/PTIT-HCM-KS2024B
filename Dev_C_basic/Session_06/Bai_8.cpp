#include <stdio.h>
#include <math.h>

int main() 
{
    double tienBanDau, laiSuat, tongTien;
    int soThangGui;
    printf("Nhap so tien ban dau: "); scanf("%lf", &tienBanDau);
    printf("Nhap lai suat thang (phan tram): "); scanf("%lf", &laiSuat);
    printf("Nhap so thang gui: "); scanf("%d", &soThangGui);
    laiSuat /=100;
    tongTien = tienBanDau * pow(1+laiSuat,soThangGui);
    double tienLai=tongTien-tienBanDau;
    printf("Tien ban dau: %.2lf\n", tienBanDau);
    printf("Lai suat: %.2lf%%\n", laiSuat * 100);
    printf("So thang gui: %d\n", soThangGui);
    printf("Tien lai: %.3lf\n", tienLai);
    printf("Tien nhan duoc la: %.3lf\n", tongTien);
    return 0;
}
