#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* 1) Fazer um programa que leia do arquivos dicionário 
(https://moodle.osorio.ifrs.edu.br/mod/resource/view.php?id=5453) 
e gere um arquivo novo contendo somente as palavras palíndromos. */

struct palindromo{
	char palavra[30];
	
}typedef palindromo;
palindromo * armazena(palindromo * p,int &qtd_realloc){
	int i;
	char nomes[30];
	char compara[30];
	int continua=1;
	FILE * dicionario;
		if((dicionario= fopen("dicionario.txt","r+"))==NULL){
			printf("ERRO ao abrir o arquivo!!!\n");
		}
		else {
			printf("arquivo aberto com sucesso \n");
			while(!feof(dicionario)){
				fscanf(dicionario,"%s ", nomes);
					for(int j=0;j<qtd_realloc;j++){
						if((strcmp(p[j].palavra,nomes))==0){
							continua=0;
						}
					}
					if(continua==1){
						strcpy(compara,nomes);
						if((strcmp(nomes,strrev(compara)))==0){
							printf("%s \n",nomes);
							qtd_realloc++;
							p = (palindromo*) realloc (p, qtd_realloc * (sizeof(palindromo)));
							strcpy(p[qtd_realloc-1].palavra,nomes);
						}
					}
				i++;
			}
		}
	fclose(dicionario);
	return p;	
}
void imprimir(palindromo * p,int vezes){
	int k=0;
	FILE * saida;
	if((saida=fopen("palindromo.odt","w+"))==NULL)
		printf("ERRO ao abrir arquivo de saida!!! \n");
	
	else{
		printf("arquivo de saida aberto com sucesso");
			while(k<vezes){
				fprintf(saida,"%s.\n",p[k].palavra);
			k++;
			}
	}
	fclose(saida);
}
int main(int argc, char** argv) {
	palindromo * cadastra;
	int qtd=1;
	cadastra =(palindromo*) malloc(sizeof(palindromo));
	cadastra = armazena(cadastra,qtd);
	imprimir(cadastra,qtd);
	return 0;
}







