#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor_inicial;
	int valor_final;
	int contador;
	
	printf("digite o primeiro valor:");
	scanf("%d",&valor_inicial);
	printf("digite o segundo valor:");
	scanf("%d",&valor_final);

		for(contador = valor_inicial+1; contador <valor_final;contador++){
			printf("%d\n ",contador);
		}
	return 0;
}
