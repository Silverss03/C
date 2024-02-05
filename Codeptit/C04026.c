#include <stdio.h>

int main()
{
    int num , arr[100], step = 1;
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]) ;
    }
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[j] < arr[i])
            {
                int tmp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = tmp ;
            }  
        }
        printf("Buoc %d: ", step) ;
        for (int k = 0; k < num; k++)
        {        
            printf("%d ", arr[k]) ;        
        }        
        step++ ;        
        printf("\n") ;        
    }
}