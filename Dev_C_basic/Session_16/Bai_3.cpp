#include <stdio.h>

int sum(int *x,int *y){
	int ketQua= *x+*y ;
	return ketQua; 
	
} 
int main() {
    int x = 5, y = 10;
    int ketQua;
	
	ketQua = sum(&x,&y);
	
	printf("Tong = %d",ketQua); 
	 
	 return 0; 
}
