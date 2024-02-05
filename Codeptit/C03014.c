#include <stdio.h> 

long long GCD(long long num1, long long num2)
{
    if (num2 == 0)
    {
        return num1 ;
    }
    return GCD(num2, num1%num2) ;
}

long long LCM(long long num1, long long num2)
{
    return (num1 * num2 ) / GCD(num1 , num2) ;
} 

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        long long num1, num2 ;
        do
        {
            scanf("%lld %lld", &num1, &num2) ;
            printf("%lld %lld\n", LCM(num1, num2) ,GCD(num1, num2)) ;
        } while (num1 < 1 || num2 > 10e8);
        
    }
}