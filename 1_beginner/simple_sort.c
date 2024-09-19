#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int arr[] = {}, i, j, key, n1, n2, n3;

	printf("Insert the first number:\n");
	scanf("%d", &arr[0]);
	printf("Insert the second number:\n");
	scanf("%d", &arr[1]);
	printf("Insert the third number:\n");
	scanf("%d", &arr[2]);

	n1 = arr[0];
	n2 = arr[1];
	n3 = arr[2];

	for(i = 1; i < 3; i++){
		key = arr[i];
		j = i - 1;

		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}

	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", arr[0], arr[1], arr[2], n1, n2, n3);

	return 0;
}