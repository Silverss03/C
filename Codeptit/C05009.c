#include <stdio.h> 

int main()
{
    int level, arr[50][50] ;
    scanf("%d", &level) ;
    for (int i = 1; i <= level; i++)
    {
        for (int j = 1; j <= level; j++)
        {
            scanf("%d", &arr[i][j]) ;
        }
    }
        for (int i = 1; i <= level; i++)
        {
            int temp ;
            temp = arr[i][i] ;
            arr[i][i] = arr[i][level - i + 1] ;
            arr[i][level - i + 1] = temp ;
        } 
        
        for (int i = 1; i <= level; i++)
        {
            for (int j = 1; j <= level; j++)
            {
                printf("%d ", arr[i][j]) ;
            }
            printf("\n") ;
        }
}