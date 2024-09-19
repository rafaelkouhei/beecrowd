#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	float a = 0.0, b = 0.0, c = 0.0;

	printf("Insert the first value:\n");
	scanf("%f", &a);
	printf("Insert the second value:\n");
	scanf("%f", &b);
	printf("Insert the third value:\n");
	scanf("%f", &c);

	if(a + b > c && a + c > b & b + c > a){
		printf("Perimetro = %.1lf\n", a+b+c);
	} else {
		printf("Area = %.1lf\n", (a+b)/2*c);
	}

	return 0;
}