#include <stdio.h>

int main(){
	printf("Hello, World!\n");

	int i = 0;

	printf("Insert the value:\n");
	scanf("%d", &i);

	for(int j = 1; j <= i; j++){
		printf("%d %d %d\n", j, j*j, j*j*j);
	}

	return 0;
}