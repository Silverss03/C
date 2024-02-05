#include <stdio.h>
#include <math.h> 

int analyze(int num)
{
    int sum = 0;
    while (num % 2 == 0)
    {
        sum += 2 ;
        num /= 2 ;
    }
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            sum += i ;
            num /= i ;
        }
    }
    if (num > 1)
    {
        sum += num ;
    }
    return sum ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    long long res = 0 ;
    while (times--)
    {
        int num ; 
        scanf("%d", &num) ;
        res += analyze(num) ;
    }
    printf("%lld", res) ;
}