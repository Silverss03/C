#include <stdio.h>

int main()
{
    int times ;
    scanf("%d", &times) ;
    for (int i = 1; i <= times; i++)
    {
        int num, arr[100] ;
        scanf("%d", &num) ;
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &arr[j]) ;
        }
        int max = 0 ;
        int count = 0;
        for (int j = 0; j < num - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                count++ ;
                if (count > max) max = count ;
            }
            else count = 0 ;
        }
        printf("Test %d:\n", i) ;
        printf("%d\n", max + 1) ;
        count = 0 ;
        for (int j = 0; j < num - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                count++ ;
            }
            if (count == max)
            {
                for (int k = j - count + 1; k < j + 2; k++)
                {
                    printf("%d ", arr[k]) ;
                }
                printf("\n") ;
                count = 0 ;
            }
            
            if (arr[j] > arr[j + 1]) count = 0 ;
        }
        
    }
    
}