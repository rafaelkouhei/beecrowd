#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	short tests = 0;

	printf("Insert the test times:\n");
	scanf("%hd", &tests);

	for(short i = 0; i < tests; i++){
		short x = 0, y = 0;

		printf("Insert the x:\n");
		scanf("%hd", &x);
		printf("Insert the y:\n");
		scanf("%hd", &y);

		short less = 0, greater = 0, odd_sum = 0;

		if(x < y){
			greater = y;
			less = x;
		} else {
			greater = x;
			less = y;
		}

		for(short j = less+1; j < greater; j++){
			if(j%2 != 0){
				odd_sum += j;
			}
		}
		printf("%hd\n", odd_sum);
	}

	return 0;
}