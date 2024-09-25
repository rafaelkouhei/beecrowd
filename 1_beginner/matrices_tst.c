#include <stdio.h>

int main(){
	printf("Hello, World!\n");

	short matrix[2][2];
	short i = 0, j = 0, sum = 0;

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("[%hd][%hd]\n", i, j);
			scanf("%hd", &matrix[i][j]);
			sum += matrix[i][j];
		}
	}

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("[%hd][%hd]", i, j);
		}
	}

	return 0;
}