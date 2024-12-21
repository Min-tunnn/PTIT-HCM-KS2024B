#include <stdio.h>
int main() 
{
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int size_arrsizeof(arr)/sizeof(arr[0]); 
    int maxCount=0;
    int max[size_arr]; 
    int phanTuCount=0;
    for (int i=0; i<size_arr; i++) 
	{
        int count=1; 
        for (int j=i+1; j<size_arr; j++) 
		{
            if (arr[i] == arr[j]) 
			{
                count++;
            }
        }
    
        if (count>maxCount) 
		{
            maxCount=count;
            max[0]=arr[i];
            phanTuCount=1;
        } 
		else if (count==maxCount) 
		{
            int isExist=0;
            for (int k=0; k<phanTuCount; k++) 
			{
                if (max[k] == arr[i]) 
				{
                    isExist=1;
                    break;
                }
            }
            if (!isExist) 
			{
                max[phanTuCount]=arr[i];
                phanTuCount++;
            }
        }
    }
    printf("cac phtu xuat hien nhieu nhat: ");
    for (int i=0; i<phanTuCount; i++) 
	{
        printf("%d ", max[i]);
    }
    printf("\n");
    return 0;
}

