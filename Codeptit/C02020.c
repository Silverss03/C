#include <stdio.h>

int main()
{
    int num ;
    scanf("%d",&num) ;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            printf("~") ;
        }
        for (int k = 0; k <= i; k ++)
        {
            printf("%d", 2*(k+1)) ;
        }
        for (int l = 2*i ; l >= 2; l -= 2)
        {
            printf("%d", l) ;
        }
        printf("\n") ;
    }
    
}