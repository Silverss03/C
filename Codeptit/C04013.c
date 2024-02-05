#include <stdio.h> 

void just_one(int arr[], int end)
{
    int res = 0; 
    int count[10] = {0} ;
    int final[100] ; 
    for (int i = 0; i < end; i++)
    {
        count[arr[i]]++ ;
    }
    for (int j = 0; j < end; j++)
    {
        if (count[arr[j]] == 1)
        {
            final[res] = arr[j] ;
            res++ ;
            count[arr[j]] = 0 ;
        }
    }
    printf("%d\n", res) ;
    for (int k = 0; k < res; k++)
    {
        printf("%d ", final[k]) ;
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
    just_one(arr, n) ;
}