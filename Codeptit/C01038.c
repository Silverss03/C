#include <stdio.h> 

int swap(int n)
{
    int count = 0 ;
    int arr[100] ;
    while (n > 0)
    {
        arr[count] = n % 10 ;
        count++ ;
        n /= 10 ;
    }
    if (arr[0] == 0)
    {
        for (int i = count - 2; i > 0; i--)
        {
            printf("%d",arr[i]) ;
        }
        printf("%d",arr[count - 1]) ;
    }
    else
    {
        printf("%d",arr[0]) ;
        for (int i = count - 2; i > 0; i--)
        {
            printf("%d",arr[i]) ;
        }
        printf("%d",arr[count - 1]) ;
    }
    
    
}
int main()
{
    int n ;
    scanf("%d", &n) ;
    swap(n) ;
}