#include <stdio.h> 

void smallest_and_near(int arr[], int end)
{
    int smallest = arr[0] ;
    int near_smallest = arr[0] ;
    for (int i = 1; i < end; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i] ;
        }
    }
    printf("%d ", smallest) ;
    for (int j = 0; j < end; j++)
    {
        if (near_smallest == smallest)
        {
            near_smallest = arr[j + 1] ;
        }
        else
        {
            if (arr[j] < near_smallest && arr[j] > smallest)
            {
                near_smallest = arr[j] ;
            }   
        }      
    }
    printf("%d", near_smallest) ;
}

int main()
{
    int num, arr[100] ;
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]) ;
    }
    smallest_and_near(arr, num) ;
}