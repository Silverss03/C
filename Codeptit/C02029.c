#include <stdio.h>

int main()
{
    int num ;
    scanf("%d", &num) ;
    for (int i = 1; i <= num; i++)
    {
        char tmp = '@' ;
        printf("%c ", '@' + i) ;    
        tmp += i ;
        for (int j = 1; j < i; j++)
        {
            tmp += num - j ;
            printf("%c ", tmp ) ;
        } 
        printf("\n") ;             
    }
    
}