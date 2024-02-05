#include <stdio.h>
#include <math.h>

int test(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0 ;
        }
    }
    return 1 ;
}

int main()
{
    int num ;
    scanf("%d", &num) ;
    for ( int i = 2; i <= num; i++)
    {
        if (test(i) )
        {
            printf("%d\n", i) ;
        }       
    }
}