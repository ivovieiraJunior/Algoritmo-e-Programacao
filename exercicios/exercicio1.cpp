#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	FILE * dicionario;
	FILE * saida;
	dicionario = fopen("dicionario.txt", "r+");
	saida = fopen("saida.txt", "w+");
	char palavra[25];
	char palavraAux[25];
	int i = 0;	
	int contpalindro=0;
		
	while(!feof(dicionario)){
		fscanf(dicionario, "%s ", palavra);
		for (i=0; i<strlen(palavra); i++){
			palavra[i] = tolower(palavra[i]);//pega a palavra toda e retorna em minusculo tmb como strlwr; 
		//	strlwr(variavel);//pega a palavra toda e retorna em minusculo; 
		}
		strcpy(palavraAux, palavra);
		if (strcmp(palavraAux, strrev(palavra))==0){
			fprintf(saida, "%s\n", palavraAux);
			contpalindro++;
		}
		};
		printf("foram %d palavras palindros", contpalindro);
	
	fclose(dicionario);
	fclose(saida);
	return 0;
}
