#include <stdio.h>

int main()
{
    int num ;
    scanf("%d", &num) ;
    char start = '@' ;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < 2*i; j += 2)
        {
            printf("%c", start + j) ;
        }
        for (int k = 2*(i - 2); k >= 0; k -= 2)
        {
            printf("%c", start + k) ;
        }
        
        printf("\n") ;
    }
    
}