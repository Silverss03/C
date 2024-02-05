#include <stdio.h> 
#include <math.h>

int check_Primes(int i)
{
    if (i < 2)
    {
        return 0 ;
    }
    else
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                return 0 ;
            }
        }
    }
    return 1 ;
}

int reverse(int i){
    int tmp;
    int res = 0;
    while(i > 0){
        tmp = i % 10;
        res = res * 10 + tmp;
        i /= 10;
    }
    return res ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num1, num2 ;
        scanf("%d %d", &num1, &num2 ) ;
        int count = 0 ;
        int line_limit = 0 ;
        for (int i = num1; i <= num2; i++)
        {
            if (check_Primes(i) == 1 && i == reverse(i))
            {
                printf("%d ", i) ;
                line_limit++ ;
                if (line_limit % 10 == 0)
                {
                    printf("\n") ;
                }   
            }   
        }
        printf("\n") ; 
    }
}