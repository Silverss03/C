#include <stdio.h> 

int sum(int n)
{
    int arr[100] ;
    int start = 0 ;
    int total = 0 ;
    while (n > 0)
    {
        arr[start] = n % 10 ;
        start++ ;
        n /= 10 ;
    }
    for (int i = 0; i < start; i++)
    {
        total += arr[i] ;
    }
    return total ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num ;
        scanf("%d", &num) ;
        if (sum(num) % 10 == 0)
        {
            printf("YES\n") ;
        }
        else
        {
            printf("NO\n") ;
        }
        
    }
    
}