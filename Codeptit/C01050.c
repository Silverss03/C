#include <stdio.h>

int drawing(int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < m; j++)
            {
                printf("*") ;
            }
            printf("\n") ;
        }
        else
        {
            printf("*") ;
            for (int j = 1; j < m - 1; j++)
            {
                printf(" ") ;
            }
            printf("*") ;
            printf("\n") ;
        }
        
    }
}

int main()
{
    int n,m ;
    scanf("%d %d", &m, &n) ;
    drawing(m,n) ;
    return 0 ;
}