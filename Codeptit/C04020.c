#include <stdio.h> 

void shifting(int arr[], int end, int shift)
{
    for (int i = shift ; i < end ; i++)
    {
        printf("%d ", arr[i]) ;
    }
    for (int j = 0; j < shift; j++)
    {
        printf("%d ", arr[j]) ;
    }
    
}

int main()
{
    int num, arr[100] ;
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]) ;
    }
    int shift ;
    scanf("%d", &shift) ;
    shifting(arr, num, shift) ;
}