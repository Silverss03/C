#include <stdio.h>
#include <string.h>

struct Student{
    int ID ;
	char name[100] ;
	char birthday[50] ;
	float Bio ;
	float Math ;
	float Liter ;
	float total ;
};

typedef struct Student Student ;

int main(){
	int ID ;
	scanf("%d", &ID) ;
	Student student[100] ;
	int i ;
	float max = 0 ;
	for(i = 0; i < ID ; i++){
	    student[i].ID = i + 1 ;
        fflush(stdin) ;
		gets(student[i].name) ;
		fflush(stdin) ;
		gets(student[i].birthday) ;
		scanf("%f", &student[i].Bio) ;
		scanf("%f", &student[i].Math) ;
		scanf("%f", &student[i].Liter) ;
		student[i].total = student[i].Bio + student[i].Math + student[i].Liter ;
        if(student[i].total > max) max = student[i].total ;
	}

    float res = student[0].total ;
    for(int i = 0 ; i < ID ; i++){
        if(student[i].total == max) printf("%d %s %s %.1f\n", student[i].ID, student[i].name, student[i].birthday, student[i].total) ;
    }
}