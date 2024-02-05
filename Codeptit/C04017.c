#include <stdio.h> 
#include <math.h> 

int is_Prime(int num)
{
    if (num < 2)
    {
        return 0 ;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0 ;
        }
    }
    return 1 ;
}

int main()
{
    int num, arr[100], count = 0 ; 
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]) ;
        if (is_Prime(arr[i])==1)
        {
            count++ ;
        }
    }
    printf("%d ", count) ;
    for (int j = 0; j < num; j++)
    {
        if (is_Prime(arr[j]) == 1)
        {
            printf("%d ", arr[j]) ;
        }
        
    }
       
}