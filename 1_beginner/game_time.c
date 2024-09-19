#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int start, end, duration;

	printf("Insert the start time:\n");
	scanf("%d", &start);
	printf("Insert the end time:\n");
	scanf("%d", &end);

	if(end - start == 0){
		duration = 24;
	} else if(end > start > 0){
		duration = end - start;
	} else{
		duration = end - start + 24;
	}

	printf("O JOGO DUROU %d HORA(S)\n", duration);

	return 0;
}