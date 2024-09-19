#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int n = 0;

	printf("Insert the test times:\n");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		float x = 0, y = 0;
		printf("Insert the x:\n");
		scanf("%f", &x);
		printf("Insert the y:\n");
		scanf("%f", &y);

		if(y == 0){
			printf("divisao impossivel\n");
		} else {
			printf("%.1lf\n", x/y);
		}
	}

	return 0;
}