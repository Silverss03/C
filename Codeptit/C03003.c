#include <stdio.h> 
#include <math.h>

int check(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0 ;
            break ;
        }
    }
    return 1;
}

int main()
{
    int num ;
    scanf("%d", &num) ;
    int start = 2 ; 
    int count = 0 ;
    while (count < num)
    {
        if (check(start))
        {
            printf("%d\n", start) ;
            count++;
        }
        start++ ;
    }
    return 0 ;
}