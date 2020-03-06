#include <stdio.h>
#include <stdlib.h>

int main (){
	FILE * entrada;
	FILE* saida;
	char uf[2];
	float parcela, soma, maiorParc = 0, menorParc = 0;
	int contParc = 0;
	
	entrada = fopen("entrada04.txt", "r+");
	saida = fopen("arqSaida.txt", "w+");
	
	while(!feof(entrada)){
		if (contParc != 0){
			fscanf(entrada, "%s %f", uf, &parcela);
			soma+=parcela;
		
			if (maiorParc == 0 && menorParc == 0){
				maiorParc = parcela;
				menorParc = parcela;
			}
			
			if (parcela > maiorParc){
				maiorParc = parcela;
			} 
			
			if (parcela < menorParc){
				menorParc = parcela;
			}
		}
		contParc++;
	}
	
	printf("A media das parcelas e: %.2f\n", soma/(contParc-1));
	printf("A soma das parcelas e: %.2f\n", soma);
	printf("O maior valor e: %.2f\n", maiorParc);
	printf("O menor valor e: %.2f", menorParc);
	
	fprintf(saida, "A media das parcelas e: %.2f\n", soma/(contParc-1));
	fprintf(saida, "A soma das parcelas e: %.2f\n", soma);
	fprintf(saida, "O maior valor e: %.2f\n", maiorParc);
	fprintf(saida, "O menor valor e: %.2f", menorParc);
	
	fclose(entrada);
	fclose(saida);
	
	return 0;
}
