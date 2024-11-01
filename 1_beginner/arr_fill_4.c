#include <stdio.h>

int main(){
	int even[5] = {}, odd[5] = {}, even_count = 0, odd_count = 0;

	printf("Hello, World!\n");

	for(int i = 0; i < 15; i++){
		int temp = 0;
		printf("Insert the value:\n");
		scanf("%d", &temp);

		//EVEN NUMBERS
		if(temp%2 == 0){
			if(even_count > 4){
				for(int j = 0; j < 5; j++){
					printf("even[%d] = %d\n", j, even[j]);
					even[j] = 0;
				}
				even[0] = temp;
				even_count = 1;
			} else {
				even[even_count] = temp;
				even_count++;
			}
		//ODD NUMBERS
		} else {
			if(odd_count > 4){
				for(int j = 0; j < 5; j++){
					printf("odd[%d] = %d\n", j, odd[j]);
					odd[j] = 0;
				}
				odd[0] = temp;
				odd_count = 1;
			} else {
				odd[odd_count] = temp;
				odd_count++;
			}
		}
	}

	for(int i = 0; i < odd_count; i++){
		printf("odd[%d] = %d\n", i, odd[i]);
	}

	for(int i = 0; i < even_count; i++){
		printf("even[%d] = %d\n", i, even[i]);
	}

	return 0;
}