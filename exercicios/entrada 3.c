#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char empresa[20];
	char sobre[20];
	char nome[20];
	char funcao[20];
	int i=0;
	
	FILE *entrada03;
	FILE *saida03;
	
	entrada03 = fopen("entrada03.txt","r+");
	saida03 = fopen("saida03.txt","a+");
	
	while(!feof(entrada03)){
		fscanf(entrada03,"%s %s %s %s", empresa, sobre, nome, funcao);
		fprintf(saida03,"%d: %s %s %s %s \n",i ,funcao ,sobre, nome, empresa);
		i++;
	}
	fclose(entrada03);
	fclose(saida03);
	return 0;
}
