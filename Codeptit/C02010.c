#include <stdio.h>

void draw(int m, int n)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d", j) ;
        }
        if (i > n)
        {
            printf("%d", i) ;
            for (int k = n - 1; k > 0; k--)
            {
                printf("%d", k) ;
            }
        }
        else
        {
            for (int k = i - 1; k > 0; k--)
            {
                printf("%d", k) ;
            }
            
        }
        printf("\n") ;
    }
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n) ;
    draw(m,n) ;
}