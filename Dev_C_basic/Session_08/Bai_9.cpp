#include <stdio.h>

int main() 
{
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    //int n_array
    //printf("nhap so luong pahn tu trong mang:"); scan("%d", &n_array);
    //arr[n_array]
    //for(int i=0; i<n_array; i++)
    //{
    //printf("Nhap[%d]:", i); scanf("%d", &arr[i]);
    //}
    int n = sizeof(arr) / sizeof(arr[0]); 
    int maxCount = 0; 
    int arrs = arr[0]; 
    for (int i=0; i<n; i++) 
	{
        int count = 1; 
        for (int j = i + 1; j < n; j++) 
		{
            if (arr[i] == arr[j]) 
			{
                count++;
            }
        }
        if (count>maxCount) 
		{
            maxCount=count;
            arrs=arr[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat: %d\n", arrs);
    return 0;
}

