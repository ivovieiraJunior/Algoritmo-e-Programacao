#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/* Faça um programa que leia a constituição do Brasil e 
armazene cada palavra em um estrutura, 
formada pela palavra a q quantidade de vezes que ela aparece.
O programa deverá ler uma palavra e percorrer a estrutura 
verificando se a palavra já existe. 
Caso encontre a palavra, deverá incrementar a quantidade de vezes que ela existe. 
Caso não encontre, deverá redimensionar o vetor de estruturas e insere a nova palavra, 
definindo como 1 a quantidade de vezes que ela aparece.
No final do programa, 
deverá listar todas as palavra e suas respectivas quantidades de repetições. */
struct palavra{
	char nome[40];
	int conta_vezes;
}typedef palavra;


palavra * ler_palavra(palavra * p, int &i){
	//int retorno_conta_vezes; //pegar se tem palavra repetida na struct para ver se precisa salvar a nova palavra
	int j=i;
	int adiciona=0,nadiciona=0;//para adicionar a nova palavra
	int contador=0;
	char linha[1024];
	char * palavra;//para o strtok
	FILE * arquivo;
		if((arquivo = fopen("constituicao.txt", "r+")) == NULL){
			printf("Erro ao abrir o arquivo!!!");
		}
		else{
			printf("arquivo aberto com sucesso");
		}
		//retorno_conta_vezes = conta_vezes(p,i);// vai comparar palavras
	while(!feof(arquivo)){
		fgets(linha,1024,arquivo);
		palavra =strtok(linha, " ");
		
			while(palavra != NULL){
			//	strcpy(p[i-1].nome,palavra);
				palavra=strtok(linha," ");
					//==comparar nomes na struct == 
					for(int w=0;w<i;w++){
						if(strcmp(p[w].nome,palavra)!=0)
							
							adiciona=1;
						else{
							p[w].conta_vezes++;
							nadiciona=1;							
						}							
					}
						if(adiciona==1 && nadiciona!=1){
						i++; 
						p = (palavra*) realloc(p , i * (sizeof(palavra)));
						p[contador].conta_vezes+=1;			
						strcpy(p[i-1].nome,linha);
						p[i-1].conta_vezes= 1;// adicionando o numero de vez que a palavra apareçe
						}					
		}
	i++;	
	}
	fclose(arquivo);
	return p;	
}


/*int conta_vezes(palavra * p,int i){    
	int contador=0;
	while(contador<i){
			while(contador<=i){
				if(strcmp(p[contador].nome,p[i].nome)==0){
					p[contador].conta_vezes+=1;
				 return 1;// se ele encontar retorna 1 para saber que tem palavra igual na sturct
				}
			i--;// decrementar o i para ele percorrer todos os nome da struct
			}
	}
	return 0;
}*/

int main(int argc, char** argv) {
	palavra * armazena;
	int conta_realloc =0;
	int cont=0;
	
	armazena = (palavra*) malloc(sizeof(palavra));
	armazena =ler_palavra(armazena, conta_realloc);
	
	//== emprimir a struct ==
	int i;
	while(cont<= i){
		
		printf("nome: %s vezes",armazena[cont].nome, armazena[cont].conta_vezes);
	cont++;
	}

	return 0;
}





