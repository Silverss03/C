#include <stdio.h>
#include <string.h>

int main()
{
    char string[100], count1 = 0, count2 = 0, count3 = 0 ;
    gets(string) ;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z' )
        {
            count1++ ;
        }    
        else if (string[i] >= 'a' && string[i] <= 'z')
        {
            count1++ ;
        }
        
        else if (string[i] >= '0' && string[i] <= '9' )
        {
            count2++ ;
        }
        else
        {
            if ((int)string[i] != 0)
            {
                count3++ ;
            }
            
        }
        
    }
    printf("%d %d %d", count1, count2, count3) ;
}