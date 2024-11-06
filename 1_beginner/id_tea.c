#include <stdio.h>

int main(){
	int x = 0, y[5] = {}, z = 0;

	printf("Hello, World!\n");

	printf("Insert the tea type:\n");
	scanf("%d", &x);

	printf("Insert the 5 types of teas:\n");
	scanf("%d %d %d %d %d", &y[0], &y[1], &y[2], &y[3], &y[4]);

	for(int i = 0; i < 5; i++){
		if(y[i] == x){
			z++;
		}
	}

	printf("%d\n", z);

	return 0;
}