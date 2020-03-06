#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char texto;
	FILE * entrada01;
	FILE * entrada02;
	FILE * saida;
	int i=0;
	
	entrada01 = fopen("entrada01.txt", "r+");
	entrada02 = fopen("entrada02.txt", "r+");
	saida = fopen("saida.txt", "a+");
	
	while(!feof(entrada02)){
		texto = fgetc(entrada02);
		fprintf(saida,"%c", texto);
		i++;
	}
		
	while(!feof(entrada01)){
		texto = fgetc(entrada01);
		fprintf(saida,"%c", texto);
		i++;
	}
	
	fclose(entrada01);
	fclose(entrada02);
	fclose(saida);
	return 0;
}
