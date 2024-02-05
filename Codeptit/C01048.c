#include <stdio.h>

int counting(int n )
{
    int even = 0 ;
    int odd = 0 ;
    int arr[1000] ;
    int count  = 0 ;
    while (n > 0)
    {
        arr[count] = n % 10 ;
        count++ ;
        n /= 10 ;
    }
    for (int i = 0; i < count; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++ ;
        }
        else
        {
            odd++ ;
        }
    }
    printf("%d %d", odd, even) ;
}

int main()
{
    int n ;
    scanf("%d", &n) ;
    counting(n) ;
}