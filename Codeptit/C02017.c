#include <stdio.h>

int main()
{
    int num ;
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        for (int j = 1; j <= (2*i)+1; j += 2)
        {
            printf("%d", j) ;
        }
        for (int k = (2*i) - 1; k >= 1; k -= 2)
        {
            printf("%d", k) ;
        }
        printf("\n") ;
    }
    
}