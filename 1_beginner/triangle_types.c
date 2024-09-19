#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	float arr[] = {}, key;

	printf("Insert the first number:\n");
	scanf("%f", &arr[0]);
	printf("Insert the second number:\n");
	scanf("%f", &arr[1]);
	printf("Insert the third number:\n");
	scanf("%f", &arr[2]);

	for(int i = 1; i < 3; i++){
		key = arr[i];
		int j = i - 1;

		while(j >= 0 && arr[j] < key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}

	float a2 = arr[0]*arr[0], b2 = arr[1]*arr[1], c2 = arr[2]*arr[2];
	int not = (arr[0] >= arr[1]+arr[2]), ret = (a2 == b2+c2), obt = (a2 > b2+c2), act = (a2 < b2+c2), equ = (a2 == b2 && a2 == c2), iso = (b2 == c2 && b2 != a2 ||a2 == b2 && b2 != c2);

	if(not){	
		printf("NAO FORMA TRIANGULO\n");
	} else {
		if(ret){
			printf("TRIANGULO RETANGULO\n");
		} 
		if(obt){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if(act){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(equ){
			printf("TRIANGULO EQUILATERO\n");
		}
		if(iso){
			printf("TRIANGULO ISOSCELES\n");
		}
	}

	return 0;
}