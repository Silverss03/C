#include <stdio.h> 

void more_than_one(int arr[], int end)
{
    int count[10] = {0} ;
    for (int i = 0; i < end; i++)
    {
        count[arr[i]]++ ;
    }
    for (int j = 0; j < end; j++)
    {
        if (count[arr[j]] != 1)
        {
            printf("%d ", arr[j]) ;
            count[arr[j]] = 1 ;
        }
    }
    
}

int main()
{
    int n, arr[100] ;
    scanf("%d", &n) ;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]) ;
    }
    more_than_one(arr, n) ;
}