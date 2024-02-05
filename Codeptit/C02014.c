#include <stdio.h>

int main()
{
    int num ;
    scanf("%d", &num) ;
    for (int i = 0; i < num * 2 - 1; i++)
    {
        if (i < num)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d", num - j) ;
            }
            for (int k = 1; k < num * 2 - (i + 1) *2; k++)
            {
                printf("%d", num - i) ;
            }
            
            for (int l = i; l >= 0; l--)
            {
                if (num - l != 1) printf("%d", num - l) ;
            }
            printf("\n") ;
        }
        if (i >= num)
        {
            for (int j = 0; j < 2 *num - i - 1 ; j++)
            {
                printf("%d", num - j) ;
            } 
            for (int k = 0; k < (i - num ) *2 + 1; k++)
            {
                printf("%d", 2 + i - num ) ;
            }
            for (int l = 2 * num - 2 - i ; l >= 0 ; l--)
            {
                printf("%d", num - l) ;
            }
            printf("\n") ;
        }
    }
    
}