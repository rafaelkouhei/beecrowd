#include <stdio.h>

int main(){
	int time = 0, x = 0, y = 0;

	printf("Hello, Wowld!\n");

	printf("Insert the remaining time:\n");
	scanf("%d", &time);

	printf("Insert the x and y values:\n");
	scanf("%d %d", &x, &y);

	if(x+y > time){
		printf("Let's go home!\n");
	} else {
		printf("Let's finish the jog!\n");
	}

	return 0;
}