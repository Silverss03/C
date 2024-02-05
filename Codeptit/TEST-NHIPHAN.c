#include <stdio.h> 

int main()
{
    int num, arr[1000], count = 0 ;
    scanf("%d", &num) ;
    if (num == 0)
    {
        printf("%d", 0) ;
    }
    
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            arr[count] = 0 ;
            count++ ;
        }
        else
        {
            arr[count] = 1 ;
            count++ ;
        }
        num /= 2 ;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d", arr[i]) ;
    }
    
}