#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int i = 0;
	float avg, s = 0, temp = 0, n = 0;

	while(i >= 0){
		printf("Insert the value:\n");
		scanf("%f", &temp);
		if(temp < 0){
			break;
		}
		i = temp;
		s = s+temp;
		n++;
	}

	avg = s/n;
	
	printf("%.2lf\n", avg);

	return 0;
}