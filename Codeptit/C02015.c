#include <stdio.h>

int main()
{
    int num ;
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        for (int j = 1; j <= (i*2) + 1; j++)
        {
            printf("%d",j) ;
        }
        printf("\n") ;
    }
    
}