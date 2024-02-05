#include <stdio.h>

int number_of_increase(int arr[], int end)
{
    int count = 1 ;
    for (int i = 0; i < end; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j] )
            {
                break; 
            }
            else if (arr[i] >= arr[j] && j == (i - 1))
            {
                count++;
            }
        }
    }
    return count  ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num, arr[100] ;
        do
        {
            scanf("%d", &num) ;
        } while (num < 2 || num > 50);
        
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &arr[i]) ;
        }
        printf("%d\n", number_of_increase(arr, num)) ;
    }
    
}