#include <stdio.h>
#include <math.h>

void max_Prime_Divisor(long long num )
{
    long long max = 0;
    while (num % 2 == 0)
    {
        max = 2 ;
        num /= 2 ;
    }
    for(int i = 3 ; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            max = i ;
            num /= i ;
        }
    }
    if (num > 2 ) printf("%lld\n", num) ;
    else printf("%lld\n", max) ;
}
int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        long long num ;
        scanf("%lld", &num) ;
        max_Prime_Divisor(num) ;
    }
    
}