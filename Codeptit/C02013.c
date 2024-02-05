#include <stdio.h>

void draw(int m, int n)
{
    if (n >= m)
    {
        for (int i = 1; i <= m; i++)
        {    
            for (int j = n - i + 1; j > 0; j--)
            {
                printf("%d", j) ;
            }
            for (int k = 2; k <= i; k++)
            {
                printf("%d", k) ;
            }
            printf("\n") ;
        }
    }
    else
    {
        for (int i = m; i > 0; i--)
        {
            if (i > n)
            {
                for (int j = i; j > i - n; j--)
                {
                    printf("%d", j) ;
                }
            }
            else
            {   
                for (int j = i ; j > 0; j--)
                {
                    printf("%d", j) ;
                }
                for (int k = 2; k < m - i ; k++)
                {
                    printf("%d", k) ;
                 }
                
            }
            printf("\n") ;
        }
        
    }
    
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n) ;
    draw(m,n) ;
}