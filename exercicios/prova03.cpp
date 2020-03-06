#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/* Fazer um programa que leia o arquivo "warehouse.dat" gere os c�lculos conforme especificado abaixo:  

a) Dever� conter uma fun��o chamada "carrega_dados_bolsa" que leia o arquivo "warehouse.dat", cujo conte�do � referente aos registros do programa Bolsa Familia (extraidos do portal da transparencia) e carrega na estrutura definida. 

A estrutura tem a seguinte defini��o: 

Estutura Bolsa_familia:
	char 	UF[2] 
	int 	Qtd_benficiarios	
	float 	Valor_Total_Parcela
	char 	Regiao[30]
	
	Todos os valores dos benef�cios dever�o ser agrupados por UF. Caso uma UF n�o exista na memoria, dever� ser realizado a realoca��o de mem�ria para comportar mais um registro. Caso a UF j� existe, o valor da parcelo dever� ser acumulado ao total da UF. 

- Lembre-se, n�o desperdicie mem�ria. O arquivo poder� ter 26 UF o apenas 2 UF. Fa�a um programa din�mico. 
	
b) Fazer um procedimento chamado "classifica_regiao" que, de acordo a UF insera a propriedade regi�o conforme segue:

REGI�O CENTRO-OESTE
��DISTRITO FEDERAL
��GOI�S
��MATO GROSSO DO SUL
��MATO GROSSO
REGI�O NORDESTE
��ALAGOAS
��BAHIA
��CEAR�
��MARANH�O
��PARA�BA
��PERNAMBUCO
��PIAU�
��RIO GRANDE DO NORTE
��SERGIPE
REGI�O NORTE
��ACRE
��AMAZONAS
��AMAP�
��PAR�
��ROND�NIA
��RORAIMA
��TOCANTINS
REGI�O SUDESTE
��ESPIRITO SANTO
��MINAS GERAIS
��RIO DE JANEIRO
��S�O PAULO
REGI�O SUL
��PARAN�
��RIO GRANDE DO SUL
��SANTA CATARINA

	c) Fazer um procedimento para gerar um arquivo de saida chamado "relatorio.csv" contendo a Regiao, UF, Qtd_beneficiarios e Valor_Total   */

struct bolsa_familia{
		char uf[2];
		int qtd_beneficiarios=0;
		float valor_total_parcela=0;
		char regiao[30];
}typedef bolsa_familia;
//struct regiao{
//	char ufs[27][3]={"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG","PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"};
//	char nome[27][30]={"ACRE","ALAGOAS","AMAP�","AMAZONAS","BAHIA","CEAR�","DISTRITO FEDERAL","ESPIRITO SANTO","GOI�S","MARANH�O","MATO GROSSO","MATO GROSSO DO SUL","MINAS GERAIS","PAR�","PARA�BA",
///	"PARAN�","PERNAMBUCO","PIAU�","RIO DE JANEIRO","RIO GRANDE DO NORTE","RIO GRANDE DO SUL","ROND�NIA","RORAIMA","SANTA CATARINA","S�O PAULO","SERGIPE","TOCANTINS"};

//}typedef regiao;;
bolsa_familia * carrega_dados_bolsa (bolsa_familia * p,int &qtd_realloc){
	int i=0;
	qtd_realloc=1;
	char ufs[2];
	float valor;
	FILE * arquivo;
	
	if((arquivo = fopen("warehouse.dat", "r+"))==NULL){
		printf("erro ao abrir o arquivo!!\n");
	}
	else{
		printf("arquivo aberto, lendo arquivo !!\n");
		while(!feof(arquivo)){
			fscanf(arquivo,"%s %f",ufs, &valor);
			printf("%s , %.2f\n",ufs,valor);
			int continua=0;
			for(int j=0;j<qtd_realloc;j++){				
				if((strcmp(p[j].uf,ufs))==0){
					p[j].qtd_beneficiarios++;
					p[j].valor_total_parcela+=valor;
					continua=1;
				}
			}
			if(continua==0){
				qtd_realloc++;
				p=(bolsa_familia*) realloc(p, qtd_realloc * (sizeof(bolsa_familia)));
				strcpy(p[qtd_realloc-1].uf, ufs);
				p[qtd_realloc-1].qtd_beneficiarios++;
				p[qtd_realloc-1].valor_total_parcela+=valor;
			}
		i++;	
		}
	}
	fclose(arquivo);
	return p;
}
void classifica_regiao(bolsa_familia *b,int tamanho){
	
	char ufs[27][3]={"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG","PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"};
	// errei era pra colocar a regiao nao o nome por esten�o entao e so trocar os nomes pela regia no votor nome abaixo
	char nome[27][30]={"ACRE","ALAGOAS","AMAP�","AMAZONAS","BAHIA","CEAR�","DISTRITO FEDERAL","ESPIRITO SANTO","GOI�S","MARANH�O","MATO GROSSO","MATO GROSSO DO SUL","MINAS GERAIS","PAR�","PARA�BA",
	"PARAN�","PERNAMBUCO","PIAU�","RIO DE JANEIRO","RIO GRANDE DO NORTE","RIO GRANDE DO SUL","ROND�NIA","RORAIMA","SANTA CATARINA","S�O PAULO","SERGIPE","TOCANTINS"};
	for(int k=0;k<tamanho; k++){
		for(int l=0;l<27;l++){
			if((strcmp(b[k].uf, ufs[l]))==0){
				strcpy(b[k].regiao,nome[l]);
			}
		}
	}	
}
void emprimir(bolsa_familia * p, int vezes){
	FILE * relatorio;
	relatorio = fopen("relatorio.csv", "w+");
			if(relatorio==NULL){
		printf("erro ao abrir o arquivo!!");
	}
	else{
		printf("arquivo aberto, salvando no arquivo !!\n");
		for(int c=0;c<vezes;c++){
			//contendo a Regiao, UF, Qtd_beneficiarios e Valor_Total
			fprintf(relatorio,"%s, %s, %d, %f \n",p[c].regiao, p[c].uf, p[c].qtd_beneficiarios, p[c].valor_total_parcela);
		}
	}
	fclose(relatorio);
}
int main(int argc, char** argv) {
	bolsa_familia * pessoa;
	int qtd=0;
//	regiao * lugar;
	pessoa = (bolsa_familia*) malloc(sizeof(bolsa_familia));
	pessoa = carrega_dados_bolsa(pessoa , qtd);	
	classifica_regiao(pessoa, qtd);
	emprimir(pessoa,qtd);
	return 0;
}









