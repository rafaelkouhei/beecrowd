#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int alc = 0, gas = 0, die = 0, valid = 0;

	while(valid == 0){
		int temp = 0;
		printf("Insert the value:\n");
		scanf("%d", &temp);

		if(temp == 1){
			alc++;
		} else if(temp == 2){
			gas++;
		} else if(temp == 3){
			die++;
		} else if(temp == 4){
			valid = 1;
			break;
		}
	}

	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, die);

	return 0;
}