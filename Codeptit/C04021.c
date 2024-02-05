#include <stdio.h> 

int shifting(int arr[], int num, int shift)
{
    for (int i = num - shift; i < num; i++)
    {
        printf("%d ", arr[i] ) ;
    }
    for (int i = 0; i < num - shift; i++)
    {
        printf("%d ", arr[i]) ;
    }
    
} 
int main()
{
    int num, arr[100], shift ;
    scanf("%d", &num) ;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]) ;
    }
    scanf("%d", &shift) ;
    shifting(arr, num, shift) ;
}