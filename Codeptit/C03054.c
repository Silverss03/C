#include <stdio.h>

int switching(int num){
    switch (num){
    case 0:
        return 0 ;
        break;
    case 1 :
        return 1;
        break;
    case 8:
        return 0;
    case 9:
        return 0;
    }
}

long long seperate(long long num){
    long long res = 0, arr[100] ;
    int count = 0 ;
    while (num > 0){
        arr[count] = num % 10 ;
        if (arr[count] != 0 && arr[count] != 1 && arr[count] != 8 && arr[count] != 9 ){
            return 0 ;
        }
        count++ ;
        num /= 10 ;
    }
    for (int i = count - 1; i >= 0; i--){
        res = res * 10 + switching(arr[i]) ; 
    }
    return res ;
    
}
int main(){
    int times ;
    scanf("%d", &times) ;
    while (times--){
        long long num ;
        scanf("%lld", &num) ;
        if (seperate(num) == 0){
            printf("INVALID\n") ;
        }
        else printf("%lld\n", seperate(num)) ;
    }
    
}