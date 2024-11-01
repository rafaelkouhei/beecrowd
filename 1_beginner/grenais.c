#include <stdio.h>

int main(){
	short i_win = 0, g_win = 0, i_score = 0, g_score = 0, draw = 0, new = 1;
	printf("Hello, World!\n");
	
	while(new == 1){
		printf("Insert the scores:\n");
		scanf("%hd %hd", &i_score, &g_score);

		if(i_score == g_score){
			draw++;
		} else if(i_score < g_score){
			g_win++;
		} else if(i_score > g_score){
			i_win++;
		}

		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%hd", &new);

		i_score = 0;
		g_score = 0;
		draw = 0;
	};

	printf("%hd grenais\nInter:%hd\nGremio:%hd\nEmpates:%hd\n", i_win+g_win+draw, i_win, g_win, draw);
	(i_win == g_win ? printf("Não houve vencedor\n") : (i_win > g_win ? printf("Inter venceu mais\n") : printf("Gremio venceu mais\n")));

	return 0;
}