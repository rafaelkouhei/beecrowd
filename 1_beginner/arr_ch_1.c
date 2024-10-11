#include <stdio.h>

int main(){
	int x[20] = {}, count = sizeof(x) / sizeof(x[0]) - 1;
	printf("Hello, World!\n");
	printf("Insert the value:\n");

	for(int i = 0; i < 20; i++){
		scanf("%d", &x[i]);
	}

	for(int i = 0; i < 10; i++){
		int temp = x[count];

		x[count] = x[i];
		x[i] = temp;
		count--;
	}

	for(int i = 0; i < 20; i++){
		printf("N[%d] = %d\n", i, x[i]);
	}

	return 0;
}