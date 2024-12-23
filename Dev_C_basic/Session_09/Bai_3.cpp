#include <stdio.h>

int main() 
{
    int arr[100];      
    int n;            
    int currentLength; 
    int pos;     

    printf("nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

    if (n<=0 || n>100) 
	{
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    currentLength = n; 

    printf("nhap cac phan tu cua mang:\n");
    for (int i=0; i<currentLength; i++) 
	{
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("mang ban dau: ");
    for (int i=0; i<currentLength; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can xoa (tu 0 den %d): ", currentLength-1);
    scanf("%d", &pos);

    if (pos<0 || pos>=currentLength) 
	{
        printf("vi tri khong hop le!\n");
    } 
	else 
	{
        for (int i=pos; i<currentLength-1; i++) 
		{
            arr[i] = arr[i+1];
        }
        currentLength--;

        printf("mang sau khi xoa: ");
        for (int i=0; i<currentLength; i++) 
		{
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

