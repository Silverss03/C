#include <stdio.h>
#include <string.h> 

int store(char string[], char arr[][100]){
    int i = 0, row = 0, col = 0 ;
    while (string[i] != '\0'){
        if(string[i] == ' '){
            arr[row][col] = '\0' ;
            col = 0 ;
            row++ ;
            i++ ;
        }
        else{
            arr[row][col++] = string[i++] ;
        }
    }
    arr[row][col] = '\0' ;
    row++ ;
    return row ;
}

void sort(char arr[][100], int length){
    for (int i = 0; i < length; i++){
        int min = i ;
        for (int j = i + 1; j < length; j++){
            if(strcmp(arr[j], arr[min]) < 0) min = j;
        }
        char tmp[100] ;
        strcpy(tmp, arr[i]) ;
        strcpy(arr[i], arr[min]) ;
        strcpy(arr[min], tmp) ;
    }
}

int main(){
    char string_1[100], string_2[100], res[100] ;
    gets(string_1) ; 
    gets(string_2) ;  
    char arr_1[100][100], arr_2[100][100], arr_3[100][100] ;
    int count = 0;
    for (int i = 0; i < store(string_1, arr_1); i++){
        int condition = 1 ;
        for (int j = 0; j < store(string_2, arr_2); j++){
            if (strcmp(arr_1[i], arr_2[j]) == 0 ) condition = 0 ;
        }
        if(condition == 1){
            int col = 0;
            while (arr_1[i][col] != '\0'){
                res[count++] = arr_1[i][col++] ;
            } 
            res[count++] = ' ' ;
        }
    }
    res[count++] = '\0' ;
    int length = store(res, arr_3) ;
    sort(arr_3, length) ;
    for (int i = 0; i < length; i++){
        int condition = 1 ;
        for (int j = i + 1; j < length; j++){
            if(strcmp(arr_3[i], arr_3[j]) == 0) condition = 0 ;
        }
        if (condition == 1){
            if (i != 0) printf("%s ", arr_3[i]) ;
            else printf("%s", arr_3[i]) ;
        }
    }
    
    
    
}