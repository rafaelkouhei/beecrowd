#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int i = 0, a[100], n = 0;

	while(0 == 0){
		int x = 0, y = 0;
		printf("Insert the x coordinate:\n");
		scanf("%d", &x);
		printf("Insert the y coordinate:\n");
		scanf("%d", &y);

		if(x == 0 || y == 0){
			break;
		}

		if(x > 0 && y > 0){
			a[i] = 1;
		} else if(x < 0 && y > 0){
			a[i] = 2;
		} else if(x < 0 && y < 0){
			a[i] = 3;
		} else if(x > 0 && y < 0){
			a[i] = 4;
		}

		i++;
		n++;
	}

	for(int j = 0; j < n; j++){
		if(a[j] == 1){
			printf("primeiro\n");
		} else if(a[j] == 2){
			printf("segundo\n");
		} else if(a[j] == 3){
			printf("terceiro\n");
		} else if(a[j] == 4){
			printf("quarto\n");
		}
	}

	return 0;
}