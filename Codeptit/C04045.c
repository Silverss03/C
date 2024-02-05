#include <stdio.h>
#include <string.h>


int main()
{
    int times  ;
    scanf("%d\n", &times) ;
    while (times--)
    {
        int count = 0 ;
        int count_even = 0, count_odd = 0 ;
        char character = ' ' ;
        while (character != '\n')
        {
            int num ;
            scanf("%d", &num) ;
            count++ ;
            if (num % 2 == 0) count_even++ ;
            else count_odd++ ;
            character = getchar() ;
        }
        if ((count % 2 == 0 && count_even > count_odd) || (count % 2 != 0 && count_odd > count_even)) printf("YES\n") ;
        else printf("NO\n") ;
    }
    
}