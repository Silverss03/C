#include <stdio.h>

long long check_fibonacci(long long num)
{
    long long f1 = 0, f2 = 1 ;
    long long fn = f1 + f2 ;
    if (num <= 1 )
    {
        return 1 ;
    }
    while (fn < num)
    {
        fn = f1 + f2 ;
        f1 = f2 ;
        f2 = fn ;
    }
    if (fn == num) return 1 ;
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
        if(check_fibonacci(num) == 1) printf("YES") ;
        else printf("NO") ;
        printf("\n") ;
    }
    
}