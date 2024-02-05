#include <stdio.h>

long long check_even_or_odd(long long num)
{
    int count_even = 0, count_odd = 0 ;
    do
    {
        int test_num = num % 10 ;
        if (test_num % 2 == 0)
        {
            count_even++ ;
        }
        else
        {
            count_odd++ ;
        }
        num /= 10 ;
    } while (num > 0);
    
    if (count_even > count_odd) return 1 ;
    return 0 ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        long long num ;
        scanf("%lld", &num) ;
        if (check_even_or_odd(num) == 1 && num % 2 == 0) printf("YES\n") ;
        else printf("NO\n") ;
    }
    
}