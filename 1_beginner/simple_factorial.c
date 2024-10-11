#include <stdio.h>

int main(){
	int x = 0, factorial = 1;

	printf("Hello, World!\n");

	printf("Insert the value:\n");
	scanf("%d", &x);

	for(int i = 0; i < x; i++){
		factorial = factorial * (x - i);
	}
	printf("%d\n", &x);
	printf("%p\n", (void*)&x);

	printf("%d\n", factorial);
}