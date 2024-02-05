#include <stdio.h>

int main()
{
    int num ;
    scanf("%d", &num) ;
    char tmp = '`' ;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < i; j++)
            {
                tmp++ ;
                printf("%c ", tmp) ;
            }
        }
        else
        { 
            tmp += i ;  
            for (int j = 0; j < i; j++)
            {
                printf("%c ", tmp - j) ;
            }
            
        }
        printf("\n") ;
    }
    
}