#include <stdio.h>

void arrange(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                int tmp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = tmp ;
            }  
        }
    }
}
int main()
{
    int num, arr[100], count_odd = 0 , count_even = 0 ;
    int odd[100], even[100] ;
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]) ;
        if (arr[i] % 2 == 0)
        { 
            even[count_even] = arr[i] ;
            count_even++ ;
        }
        else
        { 
            odd[count_odd] = arr[i] ;
            count_odd++ ;
        }
    }
    arrange(even, count_even) ;        
    arrange(odd, count_odd) ;
    for (int i = 0; i < count_even; i++)
    {
        printf("%d ", even[i]) ; 
    }
    for (int i = 0; i < count_odd; i++)
    {
        printf("%d ", odd[i]) ;
    }
    
}