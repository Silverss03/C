#include <stdio.h>
#include <math.h> 

int check_Primes(int num)
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
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int range, arr[1000] ;
        scanf("%d", &range) ;
        for (int i = 0; i < range; i++)
        {
            scanf("%d", &arr[i]) ;           
        }
        for (int j = 0; j < range; j++)
        {
            if (check_Primes(arr[j]) == 1)
            {
                printf("%d ", arr[j]) ;
            }
        }
        printf("\n") ;
    }
}