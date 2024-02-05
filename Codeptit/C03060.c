#include <stdio.h>

int how_many_times(int n){
	int res = 0, i ;
	if(n < 2) return 0 ;
	for(i = 2 ; i <= n ; i += 2){
		int tmp = i ;
		while(tmp % 2 == 0){
			res++ ;
			tmp /= 2 ;
		}
	}
	return res ;
}

int main(){
	int n, k ; 
	scanf("%d%d", &n, &k) ;
	if(how_many_times(n) >= k && how_many_times(n) != 0) printf("Yes") ;
	else printf("No") ;
}
