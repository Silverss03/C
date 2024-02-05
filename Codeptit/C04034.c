#include <stdio.h>

void biggest(int arr[], int end)
{
    for (int i = 0; i < end; i++)
    {
        for ( int j = i + 1; j < end; j++)
        {
            if (arr[i] <= arr[j])
            {
                break;
            }
            if (j == end - 1)
            {
                printf("%d ", arr[i]) ;
            }
            
        }
        if (i == end - 1)
        {
            printf("%d ", arr[i]) ;
        }
        
    }
    
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int length, arr[1000] ;
        do
        {
            scanf("%d", &length) ;
        } while (length < 1 || length > 1000);
        for (int i = 0; i < length; i++)
        {
            scanf("%d", &arr[i]) ;
        }
        biggest(arr, length) ;
        printf("\n") ;
    }
    
}