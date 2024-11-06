#include <stdio.h>

int main(){
	float x = 0;

	printf("Hello, World!\n");

	for(int i = 1; i <= 100; i++){
		x+= 1.0/i;
		printf("%d\n%.2lf\n", i, x);
	}

	printf("%.2lf\n", x);

	return 0;
}