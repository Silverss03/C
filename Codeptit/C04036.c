#include <stdio.h>

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num ;
        scanf("%d", &num) ;
        int money[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000} ;
        int i = 9 ;
        int count = 0 ;
        while (num > 0)
        {
            if (num % money[i] != num)
            {
                count+= num/money[i] ;
                num = num - (num/money[i] * money[i] ) ;
            }
            else i-- ;
        }
        printf("%d\n", count) ;
    }
    
}