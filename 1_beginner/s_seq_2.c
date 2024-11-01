#include <stdio.h>

int main(){
	float num = 1, den = 1, s = 1;
	printf("Hello, World!\n");

	for(int i = 0; i < 39; i++){
		num = num + 2;
		den = den * 2;
		s+= (float)num/den;
	}

	printf("%.2f\n", s);

	return 0;
}