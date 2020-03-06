#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char linha[1024];
	FILE *entrada03;
	FILE *saida02;
	int i=1;
	
	entrada03 = fopen("entrada03.txt", "r+");
	saida02 = fopen("saida02.txt", "a+");
	
	while(!feof(entrada03)){
		fgets(linha, 1024,entrada03);
		fprintf(saida02,"%d: %s",i ,linha);
		i++;
	}
	fclose(entrada03);
	fclose(saida02);
	return 0;
}
