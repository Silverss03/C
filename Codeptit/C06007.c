#include <stdio.h>
#include <string.h> 

int main()
{
    char string_1[100], string_2[100] ;
    gets(string_1) ;
    gets(string_2) ;
    int len2 = strlen(string_2) ;
    strcat(string_1, "\0") ;
    int i = 0, t = 0 ,k , j ;
    char res[100] ;
    while (string_1[i] != '\0')
    {
        k = i, j = 0 ; 
        while (string_1[k] == string_2[j])
        {
            k++ ;
            j++ ;
        }
        if  (j == len2) i += len2 ;
        else
        {
            res[t++] = string_1[i++] ;
        }
    }
    for (int l = 0; l < t; l++)
    {   
        printf("%c", res[l]) ;        
    }     
}