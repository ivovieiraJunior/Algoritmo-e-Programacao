#include <stdio.h>
#include <stdlib.h>

/* Atividade 02
�Fa�a um programa que leia N valores enquanto n�o for digitado um valor menor ou igual a zero.
No final do programa,dever� mostrar a quantidade de valores lidos,
 a soma dos valores lidos e a m�dia. */

int main(int argc, char *argv[]) {
	int valor1,soma=0;
	int i=1;
	printf("digite um valor:");
	scanf("%d",&valor1);
	while(valor1!=0){
		soma+=valor1;
		printf("digite um valor:");
		scanf("%d",&valor1);
		i++;
	}
	printf("quantidade de nomeros lido eh %d",i-1);
	printf("a soma dos valores eh",soma);
	printf("media dos valores eh",soma/(i-1));
	
	return 0;
}
