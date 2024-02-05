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
        if (number[0] == '8' && number[len - 1] == '8')
        {
            int count = 0 ;
            for (int i = 0; i < len; i++)        
            {
                count += (int)number[i] - 48 ;
            }
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
            if (count % 10 == 0 && k == 0) printf("YES\n") ;
            else printf("NO\n") ;
        }
        else printf("NO\n") ;
    }
}