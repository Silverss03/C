#include <stdio.h> 

int matrix_input(int arr[][100], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]) ;
        } 
    }
}

int matrix_multiply(int arr_1[][100], int arr_2[][100],int res[][100], int m , int n, int p)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                res[i][j] += arr_1[i][k] * arr_2[k][j] ; 
            }
        }  
    }
}

int main()
{
    int m, n, p, q, arr_1[100][100], arr_2[100][100], arr_3[100][100], res[100][100], final_res[100][100] ;
    scanf("%d%d%d%d", &m, &n, &p, &q) ;
    matrix_input(arr_1, m, n) ;
    matrix_input(arr_2, n, p) ;
    matrix_input(arr_3, p, q) ;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            res[i][j] = 0 ;
        }
    }
        for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            final_res[i][j] = 0 ;
        }
    }
    matrix_multiply(arr_1, arr_2, res, m, n, p) ;
    matrix_multiply(res, arr_3, final_res, m, p, q) ;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j< q; j++)
        {
            printf("%d ", final_res[i][j]) ;
        }
        printf("\n") ;
    }
    
}