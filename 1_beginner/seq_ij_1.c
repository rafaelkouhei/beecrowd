#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	short i = 1, j = 60;

	while(j >= 0){
		printf("I=%hd J=%hd\n", i, j);
		i += 3;
		j -= 5;
	}

	return 0;
}