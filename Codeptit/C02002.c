#include <stdio.h>

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                printf("~") ;
            }
        }
        for (int k = 0; k < n; k++)
        {
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