#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int n = 0, in = 0, out = 0;

	printf("Insert the test times:\n");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		int temp = 0;
		printf("Insert the %d value:\n", i);
		scanf("%d", &temp);
		if(temp >= 10 && temp <= 20){
			in++;
		} else {
			out++;
		}
	}

	printf("in: %d\n", in);
	printf("out: %d\n", out);

	return 0;
}