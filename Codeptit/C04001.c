#include <stdio.h>

int main()
{
    int times ;
    do
    {
        scanf("%d", &times) ;
    } while (times > 100);
    
    while (times--)
    {
        int num ;
        int arr[1000] ;
        do
        {
            scanf("%d", &num) ;
            for (int i = 0; i < num; i++)
            {
                do
                {
                    scanf("%d", &arr[i]) ;
                } while (arr[i] < 0 || arr[i] > 1000 );
                
            }
            for (int j = 0; j < num ; j++)
            {
                if(arr[j] % 2 == 0)  printf("%d ", arr[j]) ;
            }
        } while (num > 100 );
        printf("\n") ;
    }
    
}