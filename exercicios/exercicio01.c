#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Placa do Veiculo
? Nome do Proprietário
? Ano do Veiculo
? Valor do Veiculo */

int main(int argc, char *argv[]) {
	char placa[10][8];
	char nome [10][20];
	int ano[10];
	float valor[10];
	int i=0;
	FILE *saida;
	
	for(i=0;i<2;i++){
		fflush(stdin);//limpa o blug do teclado
	printf("digite o nome:");
	scanf("%[^\n]s", &nome[i]);
	
	printf("digite a placa:");
	scanf("%s", &placa[i]);
	
	printf("digite o ano:");
	scanf("%d", &ano[i]);
	
	printf("digite o valor :");
	scanf("%f", &valor[i]);
		 
	}
	for(i=0;i<2;i++){
		char nomearquivo[20];
		strcpy(nomearquivo,nome[i]);
		strcat(nomearquivo, ".txt");
		saida=fopen(nomearquivo,"w+");
		fprintf(saida,"Sr %s, o veículo de placa %s cujo ano de fabricação é de %d e cujo valor de mercado é de %d obteve o calculo de imposto de sobre a Propriedade de Veículos Automotores calculado em R$%d com data de vencimento em 31/01/2018.",nome[i],placa[i],valor[i]*0.03);
		fclose(saida);
	}
	system("pause");
	return 0;
}
