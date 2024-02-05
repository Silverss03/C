#include <stdio.h> 

int check(int x_A, int y_A, int x_B, int y_B, int x_C, int y_C)
{
    if ((x_B - x_A) * (y_C - y_B) == (x_C - x_B)* (y_B - y_A) ) return 1 ;
    return 0 ;
}

int main()
{
    int N, arr_X[100000], arr_Y[100000] ;
    scanf("%d", &N) ;
    int logic = 0 ;
    for (int i = 0; i < N - 1; i++)
    {
        scanf("%d %d", &arr_X[i], &arr_Y[i]) ;
    }
    for (int i = 0; i < N - 3 ; i++)
    {
        if(check(arr_X[i], arr_Y[i], arr_X[i + 1], arr_Y[i + 1], arr_X[i + 2], arr_Y[i + 2]) == 0 )  logic++ ;
    }
    if (logic == 0)
    {
        printf("Yes") ;
    }
    else printf("No") ;
}