#include <stdio.h>

long long reversed(long long num)
{
    long long res = 0 ;
    while (num > 0)
    {
        res = res * 10 + num % 10 ;
        num /= 10 ;
    }
    return res ;
}

long long extract(long long num)
{
    long long last = num % 10 ;
    num /= 10 ;
    long long res = 0 ;
    while (num > 10)
    {
        res = res * 10 + num % 10 ;
        num /= 10 ;
    }
    if (last == num * 2 && res == reversed(res) || num == last * 2 && res == reversed(res))
    {
        return 1 ;
    }
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        long long num ;
        do
        {
            scanf("%lld", &num) ;
            if (extract(num) == 1)
            {
                printf("YES\n") ;
            }
            else
            {
                printf("NO\n") ;
            }
        } while (num < 0);

        
    }
    
}