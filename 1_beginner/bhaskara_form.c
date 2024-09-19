#include <stdio.h>
#include <math.h>

int main(){
	printf("Hello, World!\n");

	float a = 0.0, b = 0.0, c = 0.0, disc = 0.0, r1 = 0.0, r2 = 0.0;

	printf("Insert the a value:\n");
	scanf("%f", &a);
	printf("Insert the b value:\n");
	scanf("%f", &b);
	printf("Insert the c value:\n");
	scanf("%f", &c);

	disc = b*b - 4*a*c;
	
	r1 = (-b + sqrt(disc)) / (2*a);
	r2 = (-b - sqrt(disc)) / (2*a);

	if(disc < 0 || a == 0){
		printf("Impossivel calcular\n");
	} else {
		printf("R1 = %.5lf\n", r1);
		printf("R2 = %.5lf\n", r2);
	}

	return 0;
}