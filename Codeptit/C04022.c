#include <stdio.h> 

void maximum_and_near(int arr[], int end) 
{
    int max = arr[0] ;
    int near_max = arr[1] ;

    for (int i = 0; i < end ; i++)
    {
        if (max < arr[i])
        {
            max = arr[i] ;
        }
    }

    for (int i = 0; i < end; i++)
    {
        if (near_max == max)
        {
            near_max = arr[i + 1] ;
        }
        
        else if (near_max < arr[i] && arr[i] < max)
        {
            near_max = arr[i] ;
        }
    }
    printf("%d %d", max, near_max ) ;
    
}
int main()
{
    int num, arr[100] ;
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]) ;
    }
    maximum_and_near(arr, num) ;
}