#include <stdio.h>

int main()
{
    int num, arr[100];
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]) ;
    }
    for (int i = 0; i < num ; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j] )
            {
                int tmp = arr[j] ;
                arr[j] = arr[i] ;
                arr[i] = tmp ; 
            }
        }
        printf("Buoc %d: ", i) ;                
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", arr[k]) ;
        }
        printf("\n") ;
    }
    
    
}