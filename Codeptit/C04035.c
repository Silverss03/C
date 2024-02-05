#include <stdio.h>

int main(){
	int N ;
	scanf("%d", &N) ;
	int up, down, i, tmp1 = 0 , tmp2 = 0, umin = 50005 , dmin = 50005;
	for(i = 0 ; i < N ; i++){
		scanf("%d %d", &up , &down) ;
		tmp1 += up ;
		tmp2 += down ;
		if(up < umin) umin = up ;
		if(down < dmin) dmin = down ; 
	}
	tmp1 += dmin ; 
	tmp2 += umin ;
	if(tmp1 > tmp2) printf("%d", tmp1 ) ;
	else printf("%d", tmp2) ;
}
