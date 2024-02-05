#include <stdio.h> 

long long check_parts(long long num)
{
    while (num > 0)
    {
        long long extract = num % 10 ;
        if (extract % 2 != 0)
        {
            return 0 ;
        }
        num /= 10 ;
    }
    return 1 ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        long long num ;
        scanf("%lld", &num) ;
        if (check_parts(num) == 1)
        {
            printf("YES\n") ;
        }
        else
        {
            printf("NO\n") ;
        }
    }
}