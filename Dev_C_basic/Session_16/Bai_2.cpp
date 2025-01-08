#include <stdio.h>

int swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp; 
} 
int main() {
    int x = 5, y = 10;
    
    printf("Truoc khi doi: x = %d, y = %d\n", x, y);
    
   swap(&x,&y); 
    
    printf("Sau khi doi: x = %d, y = %d\n", x, y);
    
    return 0;
}
