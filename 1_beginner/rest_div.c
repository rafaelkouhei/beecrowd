#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int x = 0, y = 0, first = 0, second = 0;

	printf("Insert the x:\n");
	scanf("%d", &x);
	printf("Insert the y:\n");
	scanf("%d", &y);

	if(x < y){
		first = x;
		second = y;
	} else {
		first = y;
		second = x;
	}

	for(int i = first; i < second; i++){
		if(i%5 == 2 || i%5 == 3){
			printf("%d\n", i);
		}
	}

	return 0;
}