#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

void RemoveDuplicates(char *resentence){
    char *temp1 = malloc(100);
    char *temp = NULL;

    *temp1=0;
    temp = strtok(resentence, " ");

    if (temp != NULL){
        strcpy(temp1, temp);
        while ((temp = strtok(NULL, " ")) != NULL){
            if (strstr(temp1, temp) == NULL){
                strcat(temp1, " ");
                strcat(temp1, temp);
            }
        }
    }
    strcpy(resentence, temp1);
    puts(resentence);
    free(temp1);
}

int main()
{
    char string[100] ;
    gets(string) ;
    RemoveDuplicates(string) ;
    
}