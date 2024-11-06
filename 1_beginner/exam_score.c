#include <stdio.h>

int main(){
	int x = 0;

	printf("Hello, World!\n");

	printf("Insert the x value:\n");
	scanf("%d", &x);

	if(x == 0){
		printf("E\n");
	} else if(x > 60){
		if(x > 85){
			printf("A\n");
		} else {
			printf("B\n");
		}
	} else {
		if(x > 35){
			printf("C\n");
		} else {
			printf("D\n");
		}
	}

	return 0;
}