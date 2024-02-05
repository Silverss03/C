#include <stdio.h>
#include <math.h>

int is_Prime(int num)
{
    if (num < 2 )
    {
        return 0 ;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0 ;
        }
    }
    return 1 ;
}

int main()
{
    int level, arr[100][100], sum = 0 ;
    scanf("%d", &level) ;
    for (int i = 0; i < level; i++)
    {
        for (int j = 0; j < level; j++)
        {
            scanf("%d", &arr[i][j]) ;
        }
    }
    for (int i = 0; i < level; i++)
    {
        for (int j = i; j < level; j++)
        {
            if (is_Prime(arr[i][j]) == 1)
            {
                sum += arr[i][j] ;
            }
        }
    }
    printf("%d", sum) ;
}