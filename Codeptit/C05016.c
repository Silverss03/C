#include <stdio.h>

int main()
{
    int num ;
    scanf("%d", &num) ;
    int iter = 1 ;
    int res[100][100] ;
    int R = num, C = num ;
    int r_controller = 0 , c_controller = 0 ;
    while (r_controller < R && c_controller < C)
    {
        for (int i = c_controller ; i < C; i++)
        {
            res[r_controller][i] = iter++ ;
        }
        r_controller++ ;
        for (int i = r_controller; i < R; i++)
        {
            res[i][C - 1] = iter++ ;
        }
        C-- ;
        if (r_controller < R)
        {
            for (int i = C - 1; i >= c_controller; i--)
            {
                res[R - 1][i] = iter++ ;
            }
            R-- ;
        }
        if (c_controller < C)
        {
            for (int i = R - 1; i >= r_controller; i--)
            {
                res[i][c_controller ] = iter++ ;
            }
            c_controller++ ;
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
}