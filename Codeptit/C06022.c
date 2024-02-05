#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int times, test = 1 ;
    scanf("%d\n", &times) ;
    while (times--){
        char original_string[200], delete_word[20], new_string[200][200] ;
        gets(original_string) ;
        gets(delete_word) ;
        int count = 0, main_len = strlen(original_string), side_len = strlen(delete_word);
        char *pointer = strtok(original_string, " ");

        while (pointer != NULL){
            strcpy(new_string[count++] , pointer) ;
            pointer = strtok(NULL, " ") ;
        }
        
        for (int i = 0; i < count; i++){
            if (strcasecmp(new_string[i], delete_word) == 0) new_string[i][0] = '\0' ;
        }
        
        printf("Test %d: ", test) ;
        test++ ;

        for (int i = 0; i < count; i++){
            if(new_string[i][0] != '\0') printf("%s ", new_string[i]) ;
        }

        printf("\n") ;
    }
}