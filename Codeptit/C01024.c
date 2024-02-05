#include <stdio.h> 
void test(long long n)
{
    int end =  n % 10 ;
    int start ;
    do
    {
        if (n < 10 )
        {
            start = n ;
        }
        n /= 10 ;
    } while (n > 0);
    if (start == end)
    {
        printf("YES\n") ;
    }
    else
    {
        printf("NO\n") ;
    }
    
}
int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times --)
    {
        long long n ;
        scanf("%lld" , &n) ;
        test(n) ;
    }
    return 0 ;
}