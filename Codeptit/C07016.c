#include <stdio.h>
#include <string.h>

struct Student{
	int ID ;
	char name[50] , birthday[20] ;
	float score1, score2, score3, total ;
};

typedef struct Student Student ;

int main(){
	int number, i, j ;
	scanf("%d\n", &number) ;
	Student res[1000], tmp ;
	for( i = 0; i < number ;i++){
		res[i].ID = i + 1 ;
		gets(res[i].name) ;
		gets(res[i].birthday) ;
		if (i != number - 1) scanf("%f%f%f\n", &res[i].score1, &res[i].score2, &res[i].score3) ;
		else scanf("%f%f%f", &res[i].score1, &res[i].score2, &res[i].score3) ;
		res[i].total = res[i].score1 + res[i].score2 + res[i].score3 ;
	}
	for (i = 0; i < number; i++){
		for(j = i + 1; j < number; j++){
			if(res[i].total < res[j].total){
				tmp = res[i] ;
				res[i] = res[j] ;
				res[j] = tmp ;
			}
			if(res[i].total == res[j].total && res[i].ID > res[j].total){
				tmp = res[i] ;
				res[i] = res[j] ;
				res[j] = tmp ;
			}
		}
	}
	for(i = 0; i < number ; i++){
		printf("%d %s %s %.1f\n", res[i].ID, res[i].name, res[i].birthday, res[i].total) ;
	}
}