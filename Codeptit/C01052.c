#include <stdio.h> 
#include <math.h> 

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num, count = 0 ;
        scanf("%d", &num) ;
        while (num % 2 == 0)
        {
            count++ ;
            num /= 2 ;
        }
        if (count == 0) printf("%d\n", 0) ;
        else
        {
            if (num == 1)
            {
                printf("%d\n", count) ;
            }
            else
            {
                int Divider = 0 ;
                for (int i = 3; i <= sqrt(num); i++)
                {
                    if (num % i == 0)
                    {
                        Divider++ ;
                    }
                }
                if ((int)sqrt(num) == (double)sqrt(num))
                {
                    printf("%d\n", count * (2* Divider + 1)) ;
                }
                else printf("%d\n", count * (2* Divider + 2)) ;
            }
            
        }
        
    }
    
}