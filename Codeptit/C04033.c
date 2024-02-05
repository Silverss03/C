#include <stdio.h> 

void delete(long long arr[], int end, int position)
{
    for (int i = position; i < end; i++)
    {
        arr[i] = arr[i + 1] ;
    }
    end-- ;
    
}

void exterminate(long long arr[], int end)
{
    for (int i = 0; i < end; i++)
    {
        for (int j = i + 1; j < end; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int i = j; i < end; i++)
                {
                    arr[i] = arr[i + 1] ;
                }
                end-- ;
                i-- ;
            }
        }
    }
    for (int i = 0; i < end; i++)
    {
        printf("%d ", arr[i]) ;
    }
    
}


int main()
{
    int length ; 
    long long arr[1000] ;
    scanf("%d", &length) ;
    for (int i = 0; i < length; i++)
    {
        scanf("%lld", &arr[i]) ;

    }
    exterminate(arr, length) ;
}