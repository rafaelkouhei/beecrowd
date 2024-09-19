#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int valid = 0;

	while(valid == 0){
		int x, s = 0;

		printf("Insert the value:\n");
		scanf("%d", &x);

		if(x == 0){
			valid = 1;
			break;
		}

		for(int i = 0; i < 10; i++){
			if(x%2 == 0){
				s = s + x;
			}
			x++;
		}
		printf("%d\n", s);
	}

	return 0;
}