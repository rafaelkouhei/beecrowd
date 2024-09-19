#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int x = 0, y = 0, s = 0, i = 0;

	printf("Insert the first value:\n");
	scanf("%d", &x);
	printf("Insert the second value:\n");
	scanf("%d", &y);

	if(x > y){
		for(i = x-1; i > y; i--){
			if(i%2 != 0){
				s = s + i;
			}
		}
	} else {
		for(i = x+1; i < y; i++){
			if(i%2 != 0){
				s = s + i;
			}
		}
	}


	printf("x: %d\n", x);
	printf("y: %d\n", y);
	printf("s: %d\n", s);

	return 0;
}