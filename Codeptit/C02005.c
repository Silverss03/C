#include <stdio.h>

void draw(int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < n; j++)
            {
                printf("*") ;
            }
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                printf("~") ;
            }
            for (int k = 0; k < n; k++)
            {
                printf("*") ;
            }
            
        }
        printf("\n") ;
    }
}

int main()
{
    int m,n ;
    scanf("%d %d", &m, &n) ;
    draw(m,n) ;
}