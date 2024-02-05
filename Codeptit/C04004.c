#include <stdio.h>

long long Fibonacci_n(long long num)
{
    long long f1 = 1, f2 = 1 ;
    long long res ;
    if (num <= 2)
    {
        return 1 ;
    }
    for (int i = 2; i < num ; i++)
    {
        res = f1 + f2 ;
        f1 = f2 ;
        f2 = res ;
    }
    return res ;
}

int main()
{
    int times;
    scanf("%d", &times) ;
    while (times--)
    {
        long long num ;
        scanf("%lld", &num) ;
        printf("%lld\n", Fibonacci_n(num)) ;
    }
}

