#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 			Atividade 05
• Faça um programa em C que leia um arquivo qualquer e gere 
um novo arquivo idêntico ao arquivo lido,
porém com o texto em maiusculo. */

int main(int argc, char *argv[]) {
	char caracter;
	FILE * saida;
	
	FILE * entrada = fopen("entrada01.txt", "r+");
	saida =fopen("textominusculo.txt","w+");
	
		if(entrada == NULL){
			printf("erro no arquivo de entrada");
		}
	else{
		while(!feof(entrada)){
			caracter=fgetc(entrada);
			fprintf(saida,"%c",tolower(caracter));
		}
	}
	fclose(entrada);
	fclose(saida);
	return 0;
}
