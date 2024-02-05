#include <stdio.h>

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int length ;
        scanf("%d", &length ) ;
        int arr[100], count[30000] = {0}, max = 0 ;
        for (int i = 0; i < length; i++)
        {
            scanf("%d", &arr[i]) ;
            count[arr[i]]++ ;
            if (count[arr[i]] > max) max= count[arr[i]] ;
        }
        for (int i = 0; i < length; i++)
        {
            if(count[arr[i]] == max)
            {
                printf("%d ", arr[i]) ;
                count[arr[i]] = 0 ;
            }
        }
        printf("\n") ;
    }
    
}