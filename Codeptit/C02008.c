#include <stdio.h> 

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*") ;
            }
        }
        else if (i == n - 1)
        {
            for (int j = 0; j < n ; j++)
            {
                printf("*") ;
            }
            
        }
        
        else
        {
            printf("*") ;
            for (int j = 0; j <= i - 2; j++)
            {
                printf(".") ;
            }
            printf("*") ;
        }
        printf("\n") ;
    }
}

int main()
{
    int n ;
    scanf("%d", &n) ;
    draw(n) ;
}