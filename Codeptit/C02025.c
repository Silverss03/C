#include <stdio.h> 

void draw(int m, int n )
{
    for (int i = 0; i < m; i++)
    {
        char start = '@' ;
        if (m <= n)
        {
            for (int j = i; j < n; j++)
            {
                printf("%c", start + j) ;
            }
            for (int k = i; k > 0; k--)
            {
                printf("%c", start + n - 1) ;
            }
        }
        else
        {
            if (i < n )
            {
                for (int j = i; j < n; j++)
                {
                printf("%c", start + j) ;
                }
                for (int k = i; k > 0; k--)
                {
                    printf("%c", start + n - 1) ;
                }
                
            }
            else
            {
                for (int k = n; k > 0; k--)
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
    draw(m, n) ;
}