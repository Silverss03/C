#include <stdio.h>
#include <string.h>

struct Pokemon{
	char name[100] ;
	int Evo_stone , number ,evolved, extra ;
};

typedef struct Pokemon Pokemon ;

int main(){
	int num, i,j , res= 0 , max = 0, condition = 0 ;
	scanf("%d\n", &num) ;
	Pokemon BW2[1000], tmp ;
	for(i = 0 ; i < num ; i++){
		gets(BW2[i].name) ;
		if(i != num - 1) scanf("%d%d\n", &BW2[i].Evo_stone, &BW2[i].number) ;
		else scanf ("%d%d", &BW2[i].Evo_stone, &BW2[i].number) ;
		BW2[i].evolved = BW2[i].number/BW2[i].Evo_stone;
		BW2[i].extra = BW2[i].evolved * 2 + BW2[i].number%BW2[i].Evo_stone ;
		while(BW2[i].extra >= BW2[i].Evo_stone){
		BW2[i].evolved += BW2[i].extra/BW2[i].Evo_stone ;
		BW2[i].extra = BW2[i].evolved * 2 + BW2[i].number - (BW2[i].evolved * BW2[i].Evo_stone) ;
		}
		res += BW2[i].evolved ;
		if(BW2[i].evolved > max) max = BW2[i].evolved ;
	}
	printf("%d\n", res) ;
	for(i = 0; i < num; i++){
		if(BW2[i].evolved == max && condition == 0) {
		printf("%s\n", BW2[i].name) ;
		condition = 1;
		}
	}
}
