#include <stdio.h>

void arrange_increase(int arr[], int length)
{
    for (int i = 0; i < length ; i++)    
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j] )
            {
                int tmp = arr[j] ;
                arr[j] = arr[i] ;
                arr[i] = tmp ; 
            }
        }           
    }
}

void arrange_decrease(int arr[], int length)
{
    for (int i = 0; i < length; i++)    
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] )
            {
                int tmp = arr[j] ;
                arr[j] = arr[i] ;
                arr[i] = tmp ; 
            }
        }
    }
}
int main()
{
    int times, test = 1 ;
    scanf("%d ", &times) ;
    while (times--)
    {
        int num, arr_A[100], arr_B[100] ;
        scanf("%d", &num) ;
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &arr_A[i]) ;
        }
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &arr_B[i]) ;
        }
        arrange_increase(arr_A, num) ;
        arrange_decrease(arr_B, num) ;
        int count_1 = 0, count_2 = 0 ;
        printf("Test %d:\n", test) ;
        test++ ;
        for (int i = 0; i < num * 2; i++)
        {
            if (i % 2 == 0) printf("%d ", arr_A[count_1++]) ;
            else printf("%d ", arr_B[count_2++]) ;
        }
        printf("\n") ;
        
    }
    
}