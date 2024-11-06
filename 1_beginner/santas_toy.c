#include <stdio.h>
#include <string.h>

int main(){
	int n = 0, car = 0, doll = 0;

	printf("Hello, World!\n");

	printf("Insert the n value:\n");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		char name[20] = {};
		char gender;

		printf("Insert the child's name and gender:\n");
		scanf("%s %c", name, &gender);

		if(gender == 'M'){
			car++;
		} else {
			doll++;
		}
	}

	printf("%d cars\n%d dolls\n", car, doll);

	return 0;
}