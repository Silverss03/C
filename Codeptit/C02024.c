#include <stdio.h> 

void draw(int m, int n)
{
    char start = 'A' ;
    for (int i = 0; i < m; i++)
    {
        if (m <= n)
        {
            for (int j = i ; j < n; j++)
            {
                printf("%c", start + j) ;
            }
            for (int k = i - 1; k >= 0; k--)
            {
                printf("%c", start + k) ;
            }
        }
        else
        {
            if (i < n)
            {
                for (int j = i ; j < n; j++)
                {
                    printf("%c", start + j) ;
                }
                for (int k = i - 1; k >= 0; k--)
                {
                    printf("%c", start + k) ;
                }                
            }
            else
            {
                for (int k = n - 1 ; k >= 0 ; k--)
                {
                    printf("%c", start + k) ;
                }
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