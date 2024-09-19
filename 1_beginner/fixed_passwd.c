#include <stdio.h>

int main(){
	printf("Hello, World!\n");
	int temp = 0, passwd = 2002, valid = 0;

	while(valid == 0){
		printf("Insert the password:\n");
		scanf("%d", &temp);
		if(temp == passwd){
			printf("Acesso Permitido\n");
			valid = 1;
		} else {
			printf("Senha Invalida\n");
		}
	}

	return 0;
}