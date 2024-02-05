#include <stdio.h>

int multiply(int n)
{   
    int res = 1 ;
    do
    {
        res *= n % 10 ; 
        n /= 10 ;
    } while (n > 0);
    return res ;
}
int main()
{
    int n ;
    scanf("%d", &n) ;
    printf("%d",multiply(n)) ;
    return 0 ;
}