#include <stdio.h>

int count(int n)
{
    int count = 0 ;
    while (n > 0)
    {
        n /= 10 ;
        count++ ;
    }
    return count ;
}

int main()
{
    int n ;
    scanf("%d", &n) ;
    printf("%d", count(n)) ;
}