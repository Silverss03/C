#include <stdio.h>


int perfect(int num)
{
    int total = 0 ;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            total += i ;
        }
    }
    if (total == num)
    {
        return 1 ;
    }
    return 0 ;
}

int main()
{
    int num ;
    scanf("%d", &num) ;
    for (int i = 2; i <= num ; i++)
    {
        if (perfect(i) == 1)
        {
            printf("%d ", i) ;
        }
    }
}