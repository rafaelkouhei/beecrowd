#include <stdio.h>

int main(){
	int n = 0;

	printf("Hello, World!\n");

	printf("Insert the n value:\n");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		int x = 0, y = 0;

		printf("Insert the x and y values:\n");
		scanf("%d %d", &x, &y);

		printf("%d\n", x+y);
	}

	return 0;
}