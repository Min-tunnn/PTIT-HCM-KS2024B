#include <stdio.h>

int main() {
    int n, arr[100], target;
    printf("Nhap so phan tu cua mang: "); scanf("%d", &n);

    
    printf("Nhap tung ptu trong mang:\n");
    for (int i=0; i<n; i++) 
	{
        printf("Phan tu [%d]: ", i); scanf("%d", &arr[i]);
    }

   
    for (int i=0; i<n-1; i++) 
	{
        for (int j=0; j<n-1-i; j++) 
		{
            if (arr[j] > arr[j+1]) 
			{
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nMang sau khi sap xep tang dan:\n");
    for (int i=0; i<n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nNhap vao so nguyen can tim: "); scanf("%d", &target);

    int left=0, right=n-1, found=-1;
    while (left<=right) 
	{
        int mid=(left+right)/2;
        if (arr[mid] == target) 
		{
            found=mid;
            break;
        } 
		else if (arr[mid]<target) 
		{
            left=mid+1;
        }
		 else 
		{
            right=mid-1;
        }
    }

    if (found!=-1) 
	{
        printf("Phan tu %d o vi tri %d.\n", target, found);
    } else 
	{
        printf("Phan tu %d khong ton tai trong mang!!\n", target);
    }

    return 0;
}

