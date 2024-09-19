#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int n = 0;
	float a[10000];

	printf("Insert the test times:\n");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		printf("Test number %d:\n", i+1);
		float x, y, z;
		printf("Insert the first value:\n");
		scanf("%f", &x);
		printf("Insert the second value:\n");
		scanf("%f", &y);
		printf("Insert the third value:\n");
		scanf("%f", &z);

		a[i] = (x*2 + y*3 + z*5)/10;
	}

	for(int k = 0; k < n; k++){
		printf("%.1lf\n", a[k]);
	}

	return 0;
}