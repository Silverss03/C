#include <stdio.h>
#include <string.h> 

int count(char string[])
{
    int count = 0, k = 0, len = strlen(string)  ;
    string[len] = ' ' ;
    for (int i = 0; i < len; i++)
    {
        if  (string[i] != ' ') k = 1 ;
    }
    if (k == 0) return 0 ;
    int j = 0 ;
    while (string[j] == ' ')
    {
        string[j] = '1' ;
    }
    for (int i = 0; i < len; i++)
    {
        if (string[i] == ' ' && string[i + 1] != ' ' )
        {
            count++ ;
        }
    }
    return count + 1 ;
}
int main()
{
    int times ;
    scanf("%d\n", &times) ;
    while (times--)
    {
        char string[201] ;
        gets(string) ;
        printf("%d\n", count(string)) ;
    }
    
}