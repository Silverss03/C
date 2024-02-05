#include <stdio.h>


int main()
{
    int times, test = 1 ; ;
    scanf("%d", &times) ;
    while (times--)
    {
        printf("Test %d:\n", test) ;
        int num, arr[20][20], res[20][20], arr_2[20][20] ;
        scanf("%d", &num) ;
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num; j++)
            {
                if (j <= i)
                {
                    arr[i][j] = j + 1 ;
                }
                else
                {
                    arr[i][j] = 0 ;
                }
                
            }   
        }
        for (int i = 0; i < num; i++)        
        {
            for (int j = 0; j < num; j++)
            {
                arr_2[i][j] = arr[j][i] ;
            }   
        }
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num; j++)
            {
                res[i][j] = 0 ;
                for (int k = 0; k < num; k++)
                {
                    res[i][j] += arr[i][k] *  arr_2[k][j] ;
                }
                
            }
            
        }
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num; j++)
            {
                printf("%d ", res[i][j]) ;
            }   
            printf("\n") ;
        }
        test++ ;
        printf("\n") ;
    }
    
}