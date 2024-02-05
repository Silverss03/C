#include <stdio.h> 

void arrange(int arr[], int end)
{
    for (int i = 0; i < end; i++)
    {
        for (int j = i + 1; j < end; j++)
        {
            if (arr[i] < arr[j])
            {
                int tmp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = tmp ; 
            }
        }
    }
    for (int i = 0; i < end; i++)
    {
        printf("%d ",arr[i]) ;
    }
    
}
int main()
{
    int num, arr[100] ;
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]) ;
    }
    arrange(arr, num) ;
}