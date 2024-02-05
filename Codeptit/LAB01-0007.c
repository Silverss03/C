#include <stdio.h>

int main()
{
    int length, arr[100], sum = 0;
    scanf("%d", &length) ;
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]) ;
        sum += arr[i] ;
    }
    printf("%0.3f", (double)sum/length) ;
}