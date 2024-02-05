#include <stdio.h>

int find_min(int arr[],int start, int len)
{
    int min = arr[start] ;
    for (int i = start + 1; i < len; i++)
    {
        if (arr[i] < min) min = arr[i] ;
    }
    return min ; 
}
int main()
{
    int num, arr[100];
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]) ;
    }
    for (int i = 0; i < num - 1; i++)
    {
        int min = find_min(arr, i, num) ;
        for (int j = i + 1; j < num; j++)
        {
            if (arr[j] == min )
            {
                int tmp = arr[j] ;
                arr[j] = arr[i] ;
                arr[i] = min ;
                break; 
            }
            
        }
        for (int k = 0; k < num; k++)
        {
            printf("%d ", arr[k]) ;
        }
        printf("\n") ;
    }
    
    
}