#include <stdio.h>
#include <string.h>

int main()
{
    char string[100001] ;
    gets(string) ;
    int len = strlen(string) ;
    printf("%d", len - 1) ;
}