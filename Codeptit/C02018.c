#include <stdio.h>

int main()
{
    int num ;
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            printf("~") ;
        }
        for (int k = 1; k <= (2*i) + 1; k += 2)
        {
            printf("%d", k) ;
        }
        for (int l = (2*i) - 1; l >= 1; l -= 2)
        {
            printf("%d", l) ;
        }
        printf("\n") ;
    }
    
}