#include <stdio.h>

void draw(int m, int n)
{
    char start = 'A' ;
    for (int i = 1; i <= m; i++)
    {
        if (m == n)
        {

            if (i == 1)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%c", start + n - 1 ) ;
                }
            }
            else
            {
                for (int j = i; j > 0; j--)
                {
                    printf("%c", start + n - j  ) ;
                }
                for (int k = 0; k < n - i; k++)
                {
                    printf("%c", start + n - 1 ) ;
                } 
            }
        }
        else if (m < n)
        {
            for (int j = m - i ; j < n ; j++)
            {
                printf("%c", start + j) ;
            }
            for (int k = 0 ; k < m - i; k++)
            {
                printf("%c", start + n - 1) ;
            }
        }
        else
        {
            if (i <= n)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%c", start + n - 1) ;
                }  
            }
            else
            {
                for (int j = i - n  ; j > 0; j--)
                {
                    printf("%c", start + m - n - j) ;
                }
                
                for (int k = 0; k < n - (i - n); k++)
                {
                    printf("%c", start + n - 1) ;
                }
                
            }            
        }       
        printf("\n") ;           
    }
}

int main()
{
    int m, n ;
    scanf("%d %d", &m, &n) ;
    draw(m,n) ;
}