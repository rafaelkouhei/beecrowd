#include <stdio.h>

int main(){
	double x = 0, a[100] = {};
	printf("Hello, World!\n");

	printf("Insert the value:\n");
	scanf("%lf", &x);

	a[0] = x;

	for(int i = 1; i < 100; i++){
		a[i] = a[i-1] / 2.0;
	}

	for(int i = 0; i < 100; i++){
		printf("N[%d] = %.4lf\n", i, a[i]);
	}

	return 0;
}