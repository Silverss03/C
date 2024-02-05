#include <stdio.h>

int first_num(int n)
{
    int first ;
    while (n > 0)
    {
        if (n < 10)
        {
            first = n ;
        }
        n /= 10 ;
    }
    return first ;
}

int main()
{
    int n, last ;
    scanf("%d", &n) ;
    last = n % 10 ;
    printf("%d %d", first_num(n), last) ;
}