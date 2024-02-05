#include <stdio.h>
#include <string.h> 

int store(char string[], char arr[][200]){
    int i = 0, row = 0, col = 0 ;
    while (string[i] != '\0'){
        if(string[i] == ' '){
            arr[row][col] = '\0' ;
            col = 0 ;
            row++ ;
            i++ ;
        }
        else arr[row][col++] = string[i++] ;
    }
    arr[row][col] = '\0' ;
    row++ ;
    return row ;
}

void sort(char arr[][200], int length){
    for (int i = 0; i < length; i++){
        int min = i ;
        for (int j = i + 1; j < length; j++) if(strcmp(arr[j], arr[min]) < 0) min = j;
        char tmp[200] ;
        strcpy(tmp, arr[i]) ;
        strcpy(arr[i], arr[min]) ;
        strcpy(arr[min], tmp) ;
    }
}

int main(){
    int test ;
    scanf("%d\n", &test) ;
    while (test--){
        char string_1[200], string_2[200], arr_3[200] ;
        gets(string_1) ; 
        gets(string_2) ;  
        char arr_1[200][200], arr_2[200][200], res[200][200] ;
        int count = 0;
        for (int i = 0; i < store(string_1, arr_1); i++){
            int condition = 1 ;
            for (int j = 0; j < store(string_2, arr_2); j++){
                if (strcmp(arr_1[i], arr_2[j]) == 0 ) condition = 0 ;
            }
            if(condition == 1){
                int col = 0;
                while (arr_1[i][col] != '\0') arr_3[count++] = arr_1[i][col++] ;
                arr_3[count++] = ' ' ;
            }
        }
        arr_3[count++] = '\0' ;
        int length = store(arr_3, res) ;
        sort(res, length) ;
        for (int i = 0; i < length; i++){
            int condition = 1 ;
            for (int j = i + 1; j < length; j++){
                if(strcmp(res[i], res[j]) == 0) condition = 0 ;
            }
            if (condition == 1){
                printf("%s ", res[i]) ;
            }
        }   
        printf("\n") ;
    }
    
}