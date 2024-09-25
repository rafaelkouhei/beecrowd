#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	short valid = 1;

	while(valid == 1){
		short x = 0, y = 0;
		printf("Insert the x value:\n");
		scanf("%hd", &x);
		printf("Insert the y value:\n");
		scanf("%hd", &y);

		if(x > y){
			printf("Decrescente\n");
		} else if(x < y) {
			printf("Crescente\n");
		} else if(x == y){
			valid = 0;
			break;
		}
	}

	return 0;
}