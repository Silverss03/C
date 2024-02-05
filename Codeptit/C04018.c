#include <stdio.h> 

int count(int arr[], int end)
{
    int count = 0;
    for (int i = 0; i < end; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++ ;
        }
    }
    return count ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int length, arr[100] ;
        scanf("%d", &length) ;
        for (int i = 0; i < length; i++)
        {
            scanf("%d", &arr[i]) ;
        }
        printf("%d", count(arr, length)) ;
        printf("\n") ;
    }
    
}