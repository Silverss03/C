#include <stdio.h>

int drawing(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                printf("*") ;
            }
            printf("\n") ;
        }
        else
        {
            printf("*") ;
            for (int j = 1; j < n - 1; j++)
            {
                printf(".") ;
            }
            printf("*") ;
            printf("\n") ;
        }
        
    }
}

int main()
{
    int n;
    scanf("%d", &n) ;
    drawing(n) ;
    return 0 ;
}