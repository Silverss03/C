#include <stdio.h> 

void count_appears(int arr[], int end)
{
    int count[10] = {0} ;
    for (int i = 0; i < end; i++)
    {
        count[arr[i]]++ ;
    }
    for (int j = 0; j < end; j++)
    {
        if (count[arr[j]] != 0)
        {
            printf("%d %d \n", arr[j], count[arr[j]]) ;
            count[arr[j]] = 0 ;
        }
        
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
    count_appears(arr, num) ;
}