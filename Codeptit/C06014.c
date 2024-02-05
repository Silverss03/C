#include <stdio.h>
#include <string.h> 

int main(){
    int times ;
    scanf("%d\n", &times) ;
    while (times--){
        char string[100], res[100][100] ;
        gets(string) ;
        int i = 0, row = 0, col = 0, word_appeared = 0 ;
        while (string[i] != '\0'){
            if (word_appeared == 0 && string[i] == ' '){ 
                i++ ;
            }
            if (string[i] != ' '){
                word_appeared = 1 ;
                res[row][col] = string[i] ;
                col++ ;
                i++ ;
            }
            if (string[i] == ' ' && word_appeared != 0 && string[i + 1] != ' '){
                res[row][col] = '\0' ;
                row++ ;
                col = 0 ;
                i++ ;
            }
            if (string[i] == ' ' && word_appeared != 0 && string[i + 1] == ' ') {
                i++ ;
            }
        }
        res[row][col] = '\0' ;
        row++ ;
        for (int i = 0; i < row; i++){
            if (res[i][0] >= 'a' && res[i][0] <= 'z' ) res[i][0] -= 32 ;
            for (int j = 1; res[i][j] != '\0'; j++){
                if (res[i][j] >= 'A' && res[i][j] <= 'Z') res[i][j] += 32 ;
            }
        }
        for (int i = 0; i < row; i++){
            if (i != row - 1) printf("%s ", res[i]) ;
            else printf("%s", res[i]) ;
        }
        printf("\n") ;
   
    }
    
}