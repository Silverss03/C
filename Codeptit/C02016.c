#include <stdio.h>

int main()
{
    int num ;
    scanf("%d", &num) ;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 2; j <= 2*i; j += 2)
            {
                printf("%d", j) ;
            } 
        }
        else
        {
            for (int j = 1; j <= 2*i - 1; j += 2)
            {
                printf("%d", j) ;
            }
            
        }
        printf("\n") ;
    }
    
}