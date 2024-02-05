#include <stdio.h> 

int perfection(int n)
{
    int count = 0 ;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            count += i ;
        }
    }
    if (count == n)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}

int main()
{
    int n ;
    scanf("%d", &n) ;
    printf("%d", perfection(n)) ;
    return 0 ;
}
