#include <stdio.h>
#include <string.h>

int main(){
    char string[50] , store[50][50];
    gets(string) ;
    for (int i = 0; i < strlen(string); i++){
        if (string[i] >= 'A' && string[i] <= 'Z') string[i] += 32 ;
    }  
    int count = 0 ; 
    char *pointer = strtok(string, " ") ;
    while (pointer != NULL){
        strcpy(store[count++], pointer) ;
        pointer = strtok(NULL, " ") ;
    }
    for (int i = 0; i < count; i++){
        if(i != count - 1) printf("%c", store[i][0]) ;
        else printf("%s", store[i]) ;
    }
    printf("@ptit.edu.vn") ;
    
}