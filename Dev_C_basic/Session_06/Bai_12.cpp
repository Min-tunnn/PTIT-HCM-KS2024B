#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, next;

    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);

    printf("Cac so trong day Fibonacci dau tien la: ");

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", a); 
        } else if (i == 2) {
            printf("%lld ", b); 
        } else {
            next = a + b;        
            printf("%lld ", next);
            a = b; 
            b = next; 
        }
    }
    printf("\n");

    return 0;
}
