#include <stdio.h> 

void draw(int m, int n) 
{
    char start = 'a' ;
    if (m <= n)
    {
        for (int i = 1; i <= m; i++)
        {   
            for (int k = 1; k <= i; k++)
            {
                printf("%c", start + n - k) ;
            }
        
            for (int j = 0; j < n - i; j++)
            {
                printf("%c", start + n - i ) ;
            }
            printf("\n") ;
        }
    }
    else
    {
        for (int i = 1; i <= m; i++)
        {
            if (i <= n )
            {
                for (int k = 1; k <= i; k++)
                {
                    printf("%c", start + m - k) ;
                }
                for (int j = 0; j < n - i; j++)
                {
                    printf("%c", start + m - i ) ;
                }
                printf("\n") ; 
            }
            else
            {
                for (int k = 1; k <= n; k++)
                {
                    printf("%c", start + m - k ) ;
                }
                printf("\n") ;
            }
            
        }
        
    }
    
}

int main()
{
    int m, n ;
    scanf("%d %d", &m, &n) ;
    draw(m, n) ;
}