#include <stdio.h>

void extract(int n)
{
    int i = 2 ;
    while (n > 1)
    {
        if (n % i == 0)
        {
            printf("%d ", i ) ;
            n /= i ;
        }
        else
        {
            i++ ;
        }
        
    }
    printf("\n") ;
}
int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times --)
    {
        int n ;
        scanf("%d", &n) ;
        extract(n) ;   
    }
    
}