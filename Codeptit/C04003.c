#include <stdio.h> 

int check_arr(int arr[], int start, int end)
{
    for (int i = 0; i < end/2; i++)
    {
        if (arr[i] != arr[end - i - 1])
        {
            return 0 ;
        }
        
    }
    return 1;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num, arr[100] ;
        scanf("%d", &num) ;
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &arr[i]) ;
        }
        if (check_arr(arr, 0, num  ) == 1)
        {
            printf("YES\n") ;
        }
        else printf("NO\n") ;
    }
    
} 