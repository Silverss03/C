#include <stdio.h> 
int sum(long long n)
{
    int count = 0 ;
    do
    {
        count += n % 10 ;
        n /= 10 ;
    } while (n > 0);
    return count ;
}
int main()
{
    int times ;
    scanf("%d", & times) ;
    while (times--)
    {
        long long n ;
        scanf("%lld", &n) ;
        printf("%d",sum(n)) ;
    }
    
}