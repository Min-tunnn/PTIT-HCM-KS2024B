#include<stdio.h>
using namespace std;

void printArray(int *arr, int *size) 
{
    for (int i=0; i<*size; i++) 
	{
        printf("[%d]:%d\n", i, *(arr+i));
    }
}

int main() 
{
    int array[] = {10, 20, 30, 40, 50};
    int size=sizeof(array)/sizeof(array[0]); 

    printf("Cac mang duoc in: \n");
    printArray(array, &size);

    return 0;
}

