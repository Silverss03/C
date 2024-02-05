#include <stdio.h>

int main()
{
    int num ;
    scanf("%d", &num) ;
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", i) ;    
        int tmp = i ;
        for (int j = 1; j < i; j++)
        {
            tmp += num - j ;
            printf("%d ", tmp ) ;
        } 
        printf("\n") ;             
    }
    
}