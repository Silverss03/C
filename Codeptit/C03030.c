#include <math.h> 
#include <stdio.h> 

int check(int num)
{
    int last = num % 10 ;
    num /= 10 ;
    while (num > 0)
    {
        int compare = num % 10 ;
        if (compare > last)
        {
            return 0 ;
        }
        last = compare ;
        num /= 10;
    }
    return 1 ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num ;
        scanf("%d", &num) ;
        int start = pow(10, num - 1), end = pow(10,num) ;
        for (int i = start; i < end; i++)
        {
            if (check(i) == 1)
            {
                printf("%d ", i) ;
            }
        }
        printf("\n") ;
    }
    
}