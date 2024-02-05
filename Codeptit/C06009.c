#include <stdio.h>
#include <string.h>

int growing(int arr[]){
    for (int i = 0; i < 4; i++){
        if (arr[i]  >= arr[i + 1]) return 0 ;
    }
    return 1 ;
}

int all_the_same(int arr[]){
    for (int i = 0; i < 4; i++){
        if (i < 2 && arr[i] != arr[i + 1]) return 0 ;
        else if (i == 2 && arr[i] != arr[i + 1]) continue;
        else if (i == 3 && arr[i] != arr[i + 1]) return 0 ;
    }
    return 1 ;
}

int all_6_or_8(int arr[]){
    for (int i = 0; i < 5; i++){
        if (arr[i] != 6 && arr[i] != 8) return 0 ;
    }
    return 1 ;
}
int main(){
    int test ;
    scanf("%d ", &test) ;
    while (test--){
        char sign[20] ;
        int arr[100], count = 0 ;
        gets(sign) ;
        for (int i = 0; i < 6; i++){
            if (sign[i + 6]  == (char)'.') continue;
            arr[count++] = sign[i + 6] - 48 ;
        }
        if (growing(arr) || all_the_same(arr) || all_6_or_8(arr)) printf("YES\n") ;
        else  printf("NO\n") ;
    }
    
}