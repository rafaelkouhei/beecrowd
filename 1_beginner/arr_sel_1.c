#include <stdio.h>

int main(){
	float x[100] = {};
	printf("Hello, World!\n");

	printf("Insert the number:\n");

	for(int i = 0; i < 100; i++){
		scanf("%f", &x[i]);
	}

	for(int i = 0; i < 100; i++){
		if(x[i] <= 10){
			printf("A[%d] = %.1f\n", i, x[i]);
		}
	}

	return 0;
}