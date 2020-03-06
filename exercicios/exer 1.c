#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE* entrada;
	FILE* saida;
	char palavra [25];
	char inverte [25];
	int i=0;
	
	entrada = fopen("dicionario.txt", "r+");
	saida = fopen("saida011.txt", "w+");
	
	while(!feof(entrada)){
		fscanf(entrada, "%s ", palavra);
		for(i=0;i<strlen(palavra);i++){
			palavra[i] = tolower(palavra[i]);
		}
		strcpy(inverte, palavra );
		if	(strcmp(inverte , strrev(palavra))==0){
			fprintf(saida, "%s\n", inverte);
		}

	}
	fclose(entrada);
	fclose(saida);
	return 0;
}
