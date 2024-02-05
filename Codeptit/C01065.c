#include <stdio.h>
#include <math.h>

int is_Prime(int num)
{
    if (num < 2) return 0 ;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0) return 0 ;
    }
    return 1 ;
}
int main()
{
    int num ,arr[1000], counter[10] = {0}, count = 0;
    scanf("%d", &num) ;
    while (num > 1)
    {
        if (is_Prime(num % 10) == 1)
        {
            arr[count++] = num % 10 ;
            counter[num % 10]++ ;
            num /= 10 ;
        }
        else num /= 10 ;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        if (counter[arr[i]] != 0) 
        {
            printf("%d %d\n", arr[i], counter[arr[i]]) ;
            counter[arr[i]] = 0 ;
        }
    }
    
}