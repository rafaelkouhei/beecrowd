#include <stdio.h>

int main(){
	int x = 0, y = 0, s =0;
	printf("Hello, World!\n");

	printf("Insert the x and y values:\n");
	scanf("%d %d", &x, &y);

	while(y <= 0){
		printf("Insert the y value:\n");
		scanf("%d", &y);
	}

	for(int i = 0; i < y; i++){
		s+= x + i;
	}

	printf("%d\n", s);

}