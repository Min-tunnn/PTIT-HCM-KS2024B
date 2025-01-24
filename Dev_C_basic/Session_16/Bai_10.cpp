#include <stdio.h>

void removeElement(int arr[], int *size, int index) 
{
    if (index<0||index>=*size) 
	{
        printf("Vi tri khong hop le\n", index);
        return;
    }
    for (int i=index; i<*size-1; i++) 
	{
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
void printArray(int arr[], int size)
{
    for (int i=0; i<size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(array)/sizeof(array[0]);
    int pos;

    printf("Mamh ban dauu: ");
    printArray(array, size);
    printf("Nhap vi tri can xoa: "); scanf("%d", &pos);

    removeElement(array, &size, pos);

    printf("Mang sau khi xoa: ");
    printArray(array, size);

    return 0;
}

