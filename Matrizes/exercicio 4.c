#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor;
	
		printf("digite o valor:(zero pra sair)");
		scanf("%d",&valor);
		printf(" valor digitado foi %d\n",valor);
			
		while(valor != 0 ){

			printf("digite o valor:(zero pra sair)");
			scanf("%d",&valor);
				if(valor != 0){
					printf(" valor digitado foi %d\n",valor);
				}

		}
	return 0;
}
