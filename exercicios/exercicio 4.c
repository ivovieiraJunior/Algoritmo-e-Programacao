#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Faça	um programa que leia o arquivo de texto entrada04.txt
 e calcule a média das parcelas 
(de todas as UFs), a soma das pacelas,
 a maior e a menor parcela.
 Mostrar o resultado na tela de em um arquivo de saída. */

int main(int argc, char *argv[]) {
	char sigla [2];
	float parcela;
	float media;
	float soma=0;
	float menor=0;
	float maior=0;
	int i=0;
	
	FILE * entrada;
	FILE * saida;
	entrada = fopen("entrada04.txt","r+");
	saida = fopen("saida3.txt", "w+");
	

	while(!feof(entrada)){
		if(i!=0){
			fscanf(entrada," %s %f", sigla, &parcela);
			soma =soma+ parcela;
		
		if(maior==0 && menor==0){
			maior = parcela;
			menor = parcela;
		}
		if(parcela<menor){
			menor = parcela;
		}
		if(parcela>maior){
			maior =parcela;
		}
	}
	i++;
	}

	printf("media das parcelas eh %.2f\n", soma/(i-1));
	printf("A soma das parcelas e: %.2f\n", soma);
	printf("maior parcela eh %.2f\n", maior);
	printf("menor parcela eh %.2f\n", menor);
	
	fprintf(saida, "A media das parcelas e: %.2f\n", soma/(i-1));
	fprintf(saida, "A soma das parcelas e: %.2f\n", soma);
	fprintf(saida, "O maior valor e: %.2f\n", maior);
	fprintf(saida, "O menor valor e: %.2f", menor);
	
	fclose(entrada);
	fclose(saida);
	return 0;
}
