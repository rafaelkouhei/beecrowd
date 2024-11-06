#include <stdio.h>

int main(){
	int score1 = 0, avg = 0;
	printf("Hello, World!\n");

	printf("Insert the score 1:\n");
	scanf("%d", &score1);

	printf("Insert the average score:\n");
	scanf("%d", &avg);

	int score2 = avg*2 - score1;

	printf("%d\n", score2);

	return 0;
}