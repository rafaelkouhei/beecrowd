#include <stdio.h>

int main(){
	int x = 0, y = 0, z = 0;

	printf("Hello, World!\n");

	printf("Insert the 1st, 2nd and 3rd temperatures:\n");
	scanf("%d %d %d", &x, &y, &z);

	if(y - x < 0 && z - y >=0){
		printf(":)\n");
	}
	if(y - x > 0 && z - y <= 0){
		printf(":(\n");
	}
	if(y - x > 0 && z - y > 0 && (y - x) > (z - y)){
		printf(":(\n");
	}
	if(y - x > 0 && z - y > 0 && (y - x) <= (z - y)){
		printf(":)\n");
	}
	if(y - x < 0 && z - y < 0 && (y - x) < (z - y)){
		printf(":)\n");
	}
	if(y - x < 0 && z - y < 0 && (y - x) >= (z - y)){
		printf(":(\n");
	}
	if(x == y && z - y > 0){
		printf(":)\n");
	}
	if(x == y && z - y < 0){
		printf(":(\n");
	}

	return 0;
}