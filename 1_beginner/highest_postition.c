#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int n = 0, temp = 0, pos = 0;

	for(int i = 0; i < 10; i++){
		printf("Position %d:\n", i+1);
		scanf("%d", &temp);

		if(temp > n){
			n = temp;
			pos = i+1;
		}
	}

	printf("Highest value: %d\nPosition: %d\n", n, pos);

	return 0;
}