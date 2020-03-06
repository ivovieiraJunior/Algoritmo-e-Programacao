#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* a) Deverá conter um procedimento (carrega_vetor) que leia o arquivo "dados.dat" e carregue os dados em dois vetores, 
um vetor chamado "ufs" e outro vetor chamada "valores". 
O vetor deverá conter 30.000 posições. (2 pontos). 
Obs.: Os vetores "ufs" e "valores" deverão ter escopo local, 
ambos criados no main e passados como parâmetros para o procedimento.

	b) Fazer uma função que retorne se o valor do vetor é um valor perfeito ou não. 
Um número se diz perfeito se é igual à soma de seus divisores próprios. 
Divisores próprios de um número positivo são todos os divisores inteiros positivos de N exceto o próprio N. 
Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é igual à 6. 1 + 2 + 3 = 6. 
A função numero_perfeito deverá ser chamada no main e como parâmetro deverá ser informado o valor. 
O retorno deverá ser 1 para número perfeito e 0 para imperfeito. 
Você deverá contar quantos número perfeitos existem no arquivo, 
executando a função a partir do main 

	c) Fazer um procedimento que conte quantas vezes cada uf (conta_uf) foi carregada no vetor. 
O procedimento deverá ser chamado do main. (3 pontos). Como parâmetro do procedimento, deverá ser passado o vetor "ufs". 
O Procedimento deverá imprimir a UF e quantas vezes ela aparece no vetor.

	d) Fazer uma um função recursiva para calcular a quantidade de divisores de um numero. 
A função "conta_divisores" deverá ser chamada no main. 
Como retorno da função, deverá retornar a quantidade de divisores. 
Executar para cada número, a partir do main
*/
struct ufes{
	char UF[27][3];
	int numero_de_vezes;
	
}typedef ufes;
void carrega_vetor(FILE*dados ,char ufs[30000][3], int valores[]){
	int i=0;
	if((dados=fopen("dados.dat","r+"))==NULL)
		printf("!ERRO ao abrir o arquivo \n");
	else{
		printf("sucesso arquivo aberto \n");
		while(!feof(dados)){
			fscanf(dados,"%s %d",ufs[i], &valores[i]);
			//printf("%s %d\n",ufs[i],valores[i]);
		i++;
		}
	
	}
	fclose(dados);	
}
int numero_perfeito(int valor){
	int conta_while_1=1,valores_divisores=0;
	 while(conta_while_1<valor){
	 	if(valor%conta_while_1==0)
	 		valores_divisores+=conta_while_1;
		 
		conta_while_1++;
	 }
	 if(valor==valores_divisores)
	 	return 1;
	return 0;
	
}
void conta_uf(char ufs[30000][3],ufes * ponteiro, int &qtd_realloc){
	int salvar=2;
		for(int conta_for_2=0;conta_for_2<30000;conta_for_2++){
			
			for(int conta_for_3=0;conta_for_3<qtd_realloc;conta_for_3++){
				
				if(strcmp((char*)ponteiro[conta_for_3].UF, ufs[conta_for_2])==0)
					ponteiro[conta_for_3].numero_de_vezes++;
					salvar=0;
			}
			if(salvar==1){
				qtd_realloc++;
				ponteiro=(ufes*) realloc (ponteiro,qtd_realloc *(sizeof(ponteiro)));
				strcpy((char*)ponteiro[qtd_realloc-1].UF,ufs[conta_for_2]);
				ponteiro[qtd_realloc-1].numero_de_vezes=1;
			}
		}
	for(int conta_for_4=0;conta_for_4<27;conta_for_4++){
		printf("%s apareceu %d vezes \n",ponteiro[conta_for_4].UF ,ponteiro[conta_for_4].numero_de_vezes);
	}
	
}
int conta_divisores(int valor, int valor_div, int conta_div){
		if(valor_div==1)
			conta_div+=1;
			return conta_div;
		if(valor%valor_div==0)
			conta_div++;
		
		return conta_divisores(valor,valor_div-1,conta_div);	
	
}

int main(int argc, char** argv) {
	ufes * conta_vezes;
	conta_vezes=(ufes*) malloc(sizeof(ufes));
	int conta_realloc=0;
	
	char ufs[30000][3];
	int valores[30000];
	int conta_numero_perfeito=0;
	int contador_de_divisores=0;
	
	FILE * dados;
	
	carrega_vetor(dados,ufs,valores);
	//fclose(dados);
	
	for(int conta_for_1=0;conta_for_1<30000;conta_for_1++){
		if(numero_perfeito(valores[conta_for_1])==1)
			conta_numero_perfeito++;
	}
	printf("numero de perfeitos eh: %d\n", conta_numero_perfeito);
	
	conta_uf(ufs,conta_vezes,conta_realloc);
	
	for(int conta_for_5=0;conta_for_5<30;conta_for_5++){
		printf("numero %d tem %d divisores \n",valores[conta_for_5], conta_divisores(valores[conta_for_5],valores[conta_for_5]-1,contador_de_divisores));
	}
	
	return 0;
}
