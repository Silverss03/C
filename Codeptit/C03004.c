#include <stdio.h> 

int GCD(long long m, long long n )
{
    if (n == 0 )
    {
        return m ;
    }
    return GCD(n, m%n) ;
}


int main()
{
    long long m,n ;
    scanf("%lld %lld", &m, &n) ;
    printf("%lld\n", GCD(m,n)) ;
    printf("%lld", m*n/GCD(m,n)) ;
}