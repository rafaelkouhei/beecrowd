#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	short x = 0;

	printf("Insert the number:\n");
	scanf("%hd", &x);

	for(short i = 1; i <= 10; i++){
		printf("%hd x %hd = %hd\n", i, x, i*x);
	}

	return 0;
}