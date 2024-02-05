#include <stdio.h>
#include <math.h>

long long check_square(long long area){
    long long length = sqrt(area) ;
    if (length * length == area) return length ;
    return 0 ;
}

void swap(long long length, long long width){
    long long tmp = length ;
    length = width ;
    width = tmp ;
}

int main(){
    long long a1, b1, a2, b2, a3, b3 ;
    scanf("%lld%lld%lld%lld%lld%lld", &a1, &b1, &a2, &b2, &a3, &b3) ;
    long long area = a3*b3 + a2*b2 + a1* b1 ;
    if (check_square(area) == 0) printf("NO") ;
    else{
        if (a1 > b1) swap(a1, b1) ;
        if (a2 > b2) swap(a2, b2) ;
        if (a3 > b3) swap(a3, b3) ;
        if (b1 == b2 && b2 == b3 && b3 == check_square(area) ) printf("YES") ;
        else
        {
            if (b1 < b2) {swap(a1, a2) ; swap(b1, b2) ;}
            if (b1 < b3) {swap(a1, a3) ; swap(b1, b3) ;}
            if(b1 == check_square(area) ){
                if (a2 + a3 == check_square(area) || b2 + b3 == check_square(area) || b2 + a3 == check_square(area) || a3 + b2 == check_square(area) ) printf("YES") ;
                else printf("NO") ;
            }
            else printf("NO") ;
        }

    }
    
}