#include <stdio.h>

void more_than_one(int arr[], int end)
{
    int res = 0, final_res[100], res_count = 0 ;
    for (int i = 0; i < end; i++)
    {
        int count = 0 ;
        for (int j = i + 1; j < end; j++)
        {
            if (arr[i] == arr[j])
            {
                count++ ;
            }      
        }
        if (i == 0 && count != 0)
        {
            res++ ;
            final_res[res_count] = arr[i] ;
            res_count++ ;
        }
        for (int k = 0; k < i; k++)
        {
            if (arr[k] == arr[i])
            {
                break;
            }
            if (k == i - 1 && count != 0)
            {
                res++ ;
                final_res[res_count] = arr[i] ;
                res_count++ ;
            }
        } 
    }
    printf("%d\n", res) ;
    for (int i = 0; i < res_count; i++)
    {
        printf("%d ", final_res[i]) ;
    }
    
}
int main()
{
    int length, arr[100] ;
    scanf("%d", &length) ;
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]) ;
    }
    more_than_one(arr, length) ;
}