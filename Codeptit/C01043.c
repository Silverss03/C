#include <stdio.h>

int power(int n)
{
    int power = 1 ;
    for (int i = 1; i <= n ; i++)
    {
        power *= i ;
    }
    return power ;
}

int strong_num(int n)
{
    int arr[1000] ;
    int count = 0 ;
    int res = 0 ;
    while (n > 0)
    {
        arr[count] = n % 10 ;
        count++;
        n /= 10 ;
    }
    for (int i = 0; i < count; i++)
    {
        res += power(arr[i]) ;
    }
    return res ;  
}

int main()
{
    int n ;
    scanf("%d", &n) ;
    if (strong_num(n) == n)
    {
        printf("%d", 1 ) ;
    }
    else
    {
        printf("%d", 0) ;
    }
}