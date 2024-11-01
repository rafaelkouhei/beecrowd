#include <stdio.h>

int main(){
	printf("Hello, World!\n");

	double fib[64] = {0, 1};
	int n = 0, x = 0;

	for(int i = 2; i < 64; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}

	printf("Insert the value:\n");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		printf("Insert the value:\n");
		scanf("%d", &x);
		printf("Fib(%d) = %.0f\n", x, fib[x]);
	}

	return 0;
}