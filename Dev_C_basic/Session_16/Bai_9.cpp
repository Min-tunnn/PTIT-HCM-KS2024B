#include <stdio.h>

void insertElement(int *array, int *size, int value, int position) 
{
    if (position<0||position>*size) 
	{
        printf("V? trí không h?p l?!\n");
        return;
    }

    for (int i=*size; i>position; i--) 
	{
        *(array+i)=*(array+i-1);
    }
    *(array+position)=value;
    (*size)++;
}

int main() 
{
    int array[100];   
    int size = 5;      
    int value, position;

  
    for (int i=0; i<size; i++) 
	{
        array[i] = i + 1; 
    }

    printf("M?ng ban d?u: ");
    for (int i=0; i<size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    
	printf("Nhap vi tri can them: ", size);
    scanf("%d", &position);
	
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

    insertElement(array, &size, value, position);

    printf("MANG SAU KHI THEM: \n");
    for (int i=0; i<size; i++) 
	{
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}

