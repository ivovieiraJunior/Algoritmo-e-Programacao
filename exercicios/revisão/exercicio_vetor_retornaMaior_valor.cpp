#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
#define TAM 10

/* Desenvolva uma função que dada um vetor de 10 posições,
retorne o maior elemento de tamanho N.
Os elementos são números inteiros, informados pelo usuário. 
*/

// #### FUNCAO INSERIR VETOR #### //

void inserir_valores(int *vetor){
	
	for(int i = 0; i < TAM; i ++){
		printf("\tDigite aqui o %dº valor >>==>> ", i+1);//== e para o printf ficar interativo como a usuario ==
		scanf("%d", &vetor[i]);
	}
}

// #### FUNCAO MAIOR VALOR #### //

int maior_valor (int * val){
	int maior;
		maior = val[0];
	for(int i = 0; i < 10; i ++){
		
		if(maior < val[i])
			maior = val[i];
	}
	return (maior);
}

// #### BLOCO PRINCIPAL #### //

main(){
	int vetor[TAM] = {0};//== e uma boa pratica iniciar com um valor ==
	setlocale(LC_CTYPE,"");// para colocar uma caracter especial ==
	inserir_valores(vetor);
	printf("\n\tmaior valor = %d\n", maior_valor(vetor));
	printf("\n\t");
	system("pause");
}

