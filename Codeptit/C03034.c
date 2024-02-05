#include <stdio.h> 
#include <math.h> 

int Divisor(int num)
{
    int count = 0 ;
    int count_new_Divisor = 0 ;
    if (num % 2 == 0)
    {
        while (num % 2 == 0)
        {
            count++ ;
            num /= 2 ;
        }
    }
    for (int i = 3; i <= sqrt(num) ; i++)
    {
        if (num % i == 0)
        {
            count_new_Divisor++ ;
        }
    }
    if ((int)sqrt(num) == sqrt(num))
    {
        return count * (2*count_new_Divisor + 1) ;         
    }
    else
    {
        return count * (2*count_new_Divisor + 2) ;
    }
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num ;
        scanf("%d", &num) ;
        printf("%d\n", Divisor(num)) ;
    }
    
}