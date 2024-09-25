#include <stdio.h>

int main(){
	printf("Hello, World!\n");

	short i = 0;
	int x = 1;

	printf("Insert the value:\n");
	scanf("%hd", &i);

	for(short j = 0; j < i; j++){
		printf("%d ", x);
		x++;
		printf("%d ", x);
		x++;
		printf("%d ", x);
		x++;
		printf("PUM\n");
		x++;
	}

	return 0;
}