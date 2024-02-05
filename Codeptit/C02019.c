#include <stdio.h>

int main()
{
    int num ;
    scanf("%d", &num) ;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 2; j <= 2*i; j += 2)
        {
            printf("%d", j) ;
        }
        for (int k = 2*(i - 1); k >= 2; k -= 2)
        {
            printf("%d", k ) ;
        }
        printf("\n") ;
    }
    
}