#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct word{
    char val[1001] ;
    int fre ;
};

typedef struct word word ;

int check(char word[]){
    int start = 0 , end = strlen(word) - 1 ;
    while (start < end){
        if (word[start] != word[end]) return 0 ;
        start++ ; end-- ;
    }
    return 1 ;
}

int find(word word[], int location, char tmp[]){
    for (int i = 0; i < location; i++){
        if (strcmp(tmp, word[i].val) == 0) return i ;
    }
    return -1;
}

int main(){
    word res[1001] ;
    int count = 0, len_max = 0 ;
    char tmp[1001] ;
    while ((scanf("%s", tmp)) != '\0'){
        if (check(tmp)){
            int location = find(res , count , tmp) ;
            if (location == -1){
                strcpy(res[count].val, tmp) ;
                res[count].fre = 1 ;
                count++ ;
            }
            else{
                res[location].fre += 1 ;
            }
        }
    }
    for (int i = 0; i < count; i++){
        if (strlen(res[i].val) > len_max) len_max = strlen(res[i].val) ;
    }
    for (int i = 0; i < count; i++){
        if (strlen(res[i].val) == len_max){
            printf("%s %d\n", res[i].val, res[i].fre) ;
        }   
    }
}