#include <stdio.h>

int main()
{
    int num ;
    scanf("%d", &num) ;
    int tmp = 0 ;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < i; j++)
            {
                tmp++ ;
                printf("%d ", tmp) ;
            }
        }
        else
        { 
            tmp += i ;  
            for (int j = 0; j < i; j++)
            {
                printf("%d ", tmp - j) ;
            }
            
        }
        printf("\n") ;
    }
    
}