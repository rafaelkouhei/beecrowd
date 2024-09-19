#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int n = 0, a[10000];

	printf("Insert the value:\n");
	scanf("%d", &n);

	if(n < 10000){
		for(int i = 1; i <= n; i++){
			printf("Insert the value %d:\n", i);
			scanf("%d", &a[i-1]);
		}
	}

	for(int i = 0; i < n; i++){
		if(a[i]%2 == 0 && a[i] > 0){
			printf("EVEN POSITIVE\n");
		} else if(a[i]%2 == 0 && a[i] < 0){
			printf("EVEN NEGATIVE\n");
		} else if(a[i]%2 != 0 && a[i] > 0){
			printf("ODD POSITIVE\n");
		} else if(a[i]%2 != 0 && a[i] < 0){
			printf("ODD NEGATIVE\n");
		} else if(a[i] == 0){
			printf("NULL\n");
		}
	}

	return 0;
}