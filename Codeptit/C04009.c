#include <stdio.h> 

void return_arr(int arr[], int end)
{
    int arr_odd[100], arr_even[100] ;
    int count_odd = 0, count_even = 0 ;
    for (int i = 0; i < end; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr_even[count_even] = arr[i] ;
            count_even++;
        }
        else
        {
            arr_odd[count_odd] = arr[i] ;
            count_odd++ ;
        }
    }
    for (int j = 0; j < count_even; j++)
    {
        printf("%d ", arr_even[j]) ;
    }
    printf("\n") ;
    for (int k = 0; k < count_odd; k++)
    {
        printf("%d ", arr_odd[k]) ;
    }
    
}

int main()
{
    int num, arr[100] ;
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]) ;
    }
    return_arr(arr,num) ;
}