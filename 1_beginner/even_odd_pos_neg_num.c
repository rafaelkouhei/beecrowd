#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("Hello, World!\n");
	int i = 0, a[] = {0, 0, 0, 0, 0}, even = 0, odd = 0, pos = 0, neg = 0;

	while(i < 5){
		printf("Insert the value %d:\n", i+1);
		scanf("%d", &a[i]);
		i++;
	}

	for(i = 0; i < 5; i++){
		if(abs(a[i]) % 2 == 0){
			even++;
		} if(abs(a[i]) % 2 > 0){
			odd++;
		} if(a[i] > 0){
			pos++;
		} if(a[i] < 0){
			neg++;
		}
	}

	printf("%d even numbers\n%d odd numbers\n%d positive numbers\n%d negative numbers\n", even, odd, pos, neg);

	return 0;
}