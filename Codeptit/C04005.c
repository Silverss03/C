#include <stdio.h> 

void greatest(int arr[], int end)
{
    int greatest = arr[0] ;
    int position[100], count = 0 ;
    for (int i = 1; i < end; i++)
    {
        if (arr[i] > greatest)
        {
            greatest = arr[i] ;
        }
    }
    printf("%d\n", greatest) ;
    for (int k = 0; k < end; k++)
    {
        if (arr[k] == greatest)
        {
            printf("%d ", k) ;
        }
        
    }    
    
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num, arr[100] ;
        scanf("%d", &num) ;
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &arr[i]) ;
        }
        greatest(arr, num) ;
        printf("\n") ;
    }
    
}