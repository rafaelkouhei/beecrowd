#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	float n1 = 0, n2 = 0, n3 = 0, n4 = 0, avg = 0, exam = 0;

	printf("Insert the 1st value:\n");
	scanf("%f", &n1);
	printf("Insert the 2nd value:\n");
	scanf("%f", &n2);
	printf("Insert the 3rd value:\n");
	scanf("%f", &n3);
	printf("Insert the 4th value:\n");
	scanf("%f", &n4);

	avg = n1*2/10 + n2*3/10 + n3*4/10 + n4*1/10;

	if(avg >= 7){
		printf("Media: %.1lf\nAluno aprovado.\n", avg);
	} else if(avg < 5){
		printf("Media: %.1lf\nAluno reprovado.\n", avg);
	} else {
		printf("Media: %.1lf\nAluno em exame.\nInsert the exam value:\n", avg);
		scanf("%f", &exam);
		avg = (avg+exam)/2;
		printf("Nota do exame: %.1lf\n", exam);
		if(avg >= 5){
			printf("Aluno aprovado.\n");
		} else {
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1lf\n", avg);
	}


	return 0;
}