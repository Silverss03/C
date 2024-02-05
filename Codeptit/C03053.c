#include <stdio.h> 
#include <math.h>

int check_Primes(int num)
{
    if(num < 2) return 0 ;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0) return 0 ;
    }
    return 1 ;
}

int main()
{
    int times ;
    do
    {
        scanf("%d", &times) ;
    } while (times < 1 || times > 100);
    while (times--)
    {
        int num ;
        do
        {
            scanf("%d", &num) ;
            for (int i = 3; i <= num - i; i++)
            {
                if (check_Primes(i) == 1 && check_Primes(num - i) == 1)
                {
                    printf("%d %d ", i, num - i) ;
                }
            }
            printf("\n") ;
        } while (num < 4 || num > 10000);   
    }       
}