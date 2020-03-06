#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int contador;
	int maior_valor;
	int menor_valor;
	
	
	printf("digite o valor inicial:");
	scanf("%d",&menor_valor);
	printf("digite o valor final:");
	scanf("%d", &maior_valor);
	
	contador = menor_valor +1;
	
		while(contador < maior_valor){
			printf("%d\n",contador);
			contador++;		
		}
	return 0;
}
