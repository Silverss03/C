#include <stdio.h>

int extract(int num, int Divider){
	int count = 0 ; 
	while(num % Divider == 0){
		count++ ;
		num /= Divider ;
	}
	return count ;
}
int main(){
	int times ;
	scanf("%d", &times) ;
	while(times--){
		int N, P, res = 0 , i ;
		scanf("%d%d", &N, &P) ;
		for( i = P; i <= N ; i += P){
			res += extract(i, P) ;
		}
		printf("%d\n", res) ;
	}	
}