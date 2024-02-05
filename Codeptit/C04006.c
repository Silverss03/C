#include <stdio.h>

int reverse_arr(int arr[], int start, int end)
{
    for (int i = end - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]) ;
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
    reverse_arr(arr, 0, num) ;
}