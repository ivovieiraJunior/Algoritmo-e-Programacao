#include <stdio.h>
#include <stdlib.h>

/* 1) Desenvolva uma fun��o que dada um vetor de 10 posi��es,
 retorne o maior elemento de tamanho N.
Os elementos s�ao n�meros inteiros, informados pelo usu�rio.
 */
int maior(int * v){
	int maior=0;
	int i=0;
	while(i<10){
		if(maior<v[i]){
			maior=v[i];
		}//== if ==
	i++;
	}//== while ==
	return maior;//== toda fun��o tem que ter retorno menos procedimento ==
}
int main(int argc, char *argv[]) {
	int vetor[10];
	int i=0;
		while(i<10){
			printf("digite um valor:");
			scanf("%d", &vetor[i]);
			i++;
		}
		printf("maior valor eh %d", maior(vetor));
	return 0;
}
