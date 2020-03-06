#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void carrega_vetor(FILE*arquivo, char UF[30000][3], int valores[]) {
int i = 0;
	while(!feof(arquivo)){
		fscanf(arquivo, "%s %d", UF[i], &valores[i]);
	//printf("%s %d\n", UF[i], valores[i]);
		i++;
	}
}

int numero_perfeito(int valor){
int i, somaVal = 0;
	
	for (i = 1; i < valor; i++){
		if (valor % i == 0){
			somaVal += i;
		}
	}
	if (somaVal == valor){
		return 1;
	} else {
		return 0;
	}
}

void conta_uf(char UF[30000][3]){
int i, j;
char UF_compara[27][3] = {"AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA", "MT", "MS", "MG", "PA", "PB", "PR", "PE", "PI", "RJ", "RN", "RS", "RO", "RR", "SC", "SP", "SE", "TO"};
int contUF[27] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (i = 0; i < 30000; i++){
		for (j = 0; j < 27; j++){
		if(strcmp(UF[i], UF_compara[j]) == 0){
			contUF[j]++;
		}
		}
	}
	printf("\n");
	for (i = 0; i < 27; i++){
		printf("%s: aparece %d vezes\n", UF_compara[i], contUF[i]);
	}
}

int conta_divisores(int valor, int valorDiv, int cont){
	if(valorDiv == 1){
		cont += 1;
		return cont;
	} 
	if (valor % valorDiv == 0){
		cont++;
	}
	return conta_divisores(valor, valorDiv-1, cont);
}

int main() { 
	FILE * arquivo;
	arquivo = fopen("dados.dat", "r+");
	char UF[30000][3];
	int valores[300000];
	int j, contNumPerf = 0, cont = 0;
	
	carrega_vetor(arquivo, UF, valores);

	fclose(arquivo);
	
	/* Numero perfeito */
	
	for (j = 0; j < 30000; j++){
		if(numero_perfeito(valores[j]) == 1){
			contNumPerf++;
		}	
	}
	
	printf("O arquivo tem %d numeros perfeitos.", contNumPerf);

	/* Conta UFs */
	conta_uf(UF);
	
	/* Conta divisores */
	
	for (j = 0; j < 30000; j++){
		printf("O numero %d tem %d divisores\n", valores[j], conta_divisores(valores[j], valores[j]-1, cont));
	}
	
    return(0);
}
