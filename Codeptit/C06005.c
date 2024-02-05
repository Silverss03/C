#include <stdio.h>
#include <string.h>

int main(){
    char S[1000], word[1000][1000] ;
    int times[1000] , count = 0 ;
    gets(S) ;
    for (int i = 0; i < strlen(S); i++){
        if (S[i] >= 'A' && S[i] <= 'Z') S[i] += 32 ;
    }
    
    int i = 0, r = 0 , c = 0;
    while (S[i] != '\0'){
        if (S[i] != ' '){
            word[r][c] = S[i] ;
            i++ ;
            c++ ;
        }
        else{
            word[r][c] = '\0' ;
            r++ ;
            c = 0 ;
            i++ ; 
        }
    }
    word[r][c] = '\0' ;
    r++ ;
    c = 0 ;
    for (int i = 0; i < r; i++){
        times[i] = 1;
    }
    
    for (int i = 0; i < r - 1; i++){
        for (int l = 0; l < r; l++){
            if(word[l][c] == '\0' || i == l) continue;
            if (strcmp(word[i], word[l]) == 0){
                word[l][c] = '\0' ;
                times[count]++ ;
            } 
        }
        count++ ;
    }
    for (int i = 0; i < r; i++){
        if (word[i][c] == '\0') continue;
        else{
            printf("%s %d\n", word[i], times[i]) ;
        }
        
    }
    
    
    
}