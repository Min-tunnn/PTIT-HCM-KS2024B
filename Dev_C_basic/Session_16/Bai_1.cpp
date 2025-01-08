#include <stdio.h>
using namespace std;

int main() 
{
    int x = 10;
    int* ptr = &x;

    printf("gia tri cua bien x (without pointer): %d\n", x);     
    printf("Gia tri cua bien x (pointer): %d\n", *ptr);     
    //output
    printf("Dia chi cua bien x (without pointer): %p\n", &x );     
    printf("Dia chi cua bien x (pointer): %p\n", ptr);    
    return 0;
}

