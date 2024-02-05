#include <stdio.h>
#include <string.h>
#include <math.h>

int Prime(int num)
{
    if (num < 2) return 0 ;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0 ;
        }
    }
    return 1 ;
}
void answer(char num[], int len)
{
    int k = 0 ;
    for (int i = 0; i < len/2; i++)        
        {        
            if (num[i] != num[len - i - 1])            
            {        
                printf("NO\n") ;        
                k = 1 ;        
                break;        
            }
        }
        if (k == 0)
        {
            int check = 0 ;
            for (int i = 0; i < len; i++)
            {
                if (Prime((int)num[i] - 48) == 0) 
                {
                    printf("NO\n") ;  
                    check = 1 ; 
                    break;
                }      
            }
            if (check == 0)
            {
                printf("YES\n") ;
            } 
        }
}
int main()
{
    int times ;
    scanf("%d\n", &times) ;
    while (times--)
    {
        char num[500] ;
        gets(num) ;
        int len = strlen(num) ;
        answer(num, len) ;
    }

}