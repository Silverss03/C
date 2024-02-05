#include <stdio.h>

void draw(int m, int n)
{
    for (int i = 1; i <= m ; i++)
    {
        if (i > n)
        {
            printf("%d", i) ;
            for (int k = i - 1; k >= i - n + 1  ; k--)
            {
                printf("%d", k) ;
            }
        }
        else
        {
            for (int j = i; j > 0; j--)
            {
            printf("%d", j) ;
            }
            for (int k = 2; k <= (n - i + 1); k++)
            {
                printf("%d", k) ;
            }
        }
        printf("\n" ) ;
    }
}

int main()
{
    int m,n ;
    scanf("%d %d", &m, &n ) ;
    draw(m, n) ;
}