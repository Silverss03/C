#include <stdio.h> 

int main()
{
    int A, B, fusion_num ;
    scanf("%d %d", &A, &B) ;
    int arr_A[1000], arr_B[1000] ;
    for (int i = 0; i < A; i++)
    {
        scanf("%d" ,&arr_A[i] ) ;
    }
    for (int j = 0; j < B; j++)
    {
        scanf("%d" ,&arr_B[j] ) ;
    }
    scanf("%d", &fusion_num) ;
    for (int k = 0; k < A + B; k++)
    {
        if (k < fusion_num)
        {
            printf("%d ", arr_A[k])  ;
        }
        else if (fusion_num <= k && k < fusion_num + B )
        {
            printf("%d ", arr_B[k - fusion_num]) ;
        }
        else
        {
            printf("%d ",arr_A[k - B]) ;
        }
    }

}