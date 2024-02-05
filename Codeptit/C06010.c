#include <stdio.h>
#include <string.h>

int main()
{
    int times ;
    scanf("%d\n", &times) ;
    while (times--)
    {
        char number[500] ;
        gets(number) ;
        int len = strlen(number) ;
        if ((int)number[len - 1] % 2 == 0)
        {
            int k = 0 ;
            for (int i = 0; i < len/2; i++)
            {
                if (number[i] != number[len - i - 1])
                {
                    printf("NO\n") ;
                    k = 1 ;
                    break;
                }
            }
            if (k == 0)
            {
                printf("YES\n") ;
            }
            
        }
        else printf("NO\n") ;
    }
}