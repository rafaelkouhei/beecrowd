#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	short valid = 1;

	while(valid == 1){
		short x = 0, y = 0, sum = 0;

		printf("Insert the x value:\n");
		scanf("%hd", &x);
		printf("Insert the y value:\n");
		scanf("%hd", &y);

		if(x <= 0 || y <= 0){
			valid = 0;
			break;
		}

		short less = 0, greater = 0;

		if(x < y){
			less = x;
			greater = y;
		} else {
			less = y;
			greater = x;
		}

		for(short i = less; i <= greater; i++){
			printf("%hd ", i);
			sum += i;
		}
		printf("Sum=%hd\n", sum);

	}

	return 0;
}