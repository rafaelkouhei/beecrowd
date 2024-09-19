#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int n1, n2;

	printf("Insert the first number:\n");
	scanf("%d", &n1);
	printf("Insert the second number:\n");
	scanf("%d", &n2);

	if(n1%n2 == 0 || n2%n1 == 0){
		printf("Sao Multiplos\n");
	} else {
		printf("Nao sao Multiplos\n");
	}

	return 0;
}