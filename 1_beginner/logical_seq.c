#include <stdio.h>

int main(){
	int x = 0, row = 1, col = 0;;
	printf("Hello, World!\n");

	printf("Insert the value:\n");
	scanf("%d", &x);

	for(int i = 0; i < x*2; i++){
		printf("%d %d %d\n", row, row*row+col, row*row*row+col);

		if(col == 0){
			col++;
		} else {
			col--;
			row++;
		}
	}

	return 0;
}