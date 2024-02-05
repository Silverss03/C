#include <stdio.h>
#include <math.h>

int is_Prime(int num)
{
    if (num < 2)
    {
        return 0 ;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0 ;
        }
    }
    return 1 ;
}

int main()
{
    int times ;
    scanf("%d", &times) ;
    while (times--)
    {
        int num, arr[100], res = 1, counter = 0, Prime = 2 ;
        scanf("%d", &num) ;
        int tmp = num ;
        while (num > 1 )
        {
            if (num % Prime == 0)
            {
                arr[counter] = Prime ;
                counter++ ;
                num /= Prime ;
            }
            else Prime++ ;
        }
        for (int i = 0; i < counter; i++)
        {
            int count = 0 ;
            for (int j = i ; j >= 0; j--)
            {
                if (arr[i] == arr[j])
                {
                    count++ ;
                }
            }
            if ( count <= 1)
            {
                res *= arr[i] ;
            }
            
        }
        printf("%d\n", res) ;
    }
}