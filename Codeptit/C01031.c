#include <stdio.h>

int main()
{
    int num , prime = 2, arr[100], count = 0 ;
    scanf("%d", &num) ;
    while (num > 1)
    {   
        if (num % prime == 0)
        {
            num /= prime ;
            arr[count] = prime ;
            count++ ;
        }
        else
        {
            prime++ ;
        }  
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d", arr[i]) ;
        if (i != count - 1)
        {
            printf("x") ;
        }
        
    }
    
}