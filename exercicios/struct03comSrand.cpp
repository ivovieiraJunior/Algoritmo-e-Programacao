#include <iostream>
#include <ctype.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Faça um programa para administrar uma estrutura de 50 números inteiros.
Structnumero{
intvalor;
charprimo[1];
intdivisores;
}
Os números serão gerados aleatoriamente (usar função rand()).
Após gerar os números, fazer uma função para 
verificar se os números são primos (sim ou não) e outra para calcular a quantidade de divisores.
Criar um procedimento para organizar o vetor de estruturas.
No final do programa, deverão ser listados todos os valores, uma vez crescente e outra decrescente. */

struct Numero{
	char primo[1];
	int valor=0;
	int divisores=0;
}typedef numero;

numero * encrementar_numero(numero * p){
	int i=0;
	
	//Estava faltnado o SRAND - Sem o SRAN a sequencia sempre vai ser a mesma
	srand(time(NULL)); 
	
	while(i<50){
		
		p[i].valor=rand()%100;
		printf("Valor do srand:%d \n", p[i].valor);
	i++;
	}
		return p;
}
void conta_primo(numero * p){
	int cont=1;
	int i=0,valor;
	
		while(i<50){ //menor de 50 - de 0 até 49
			valor=0;
			cont=1; //sempre dividir de 1 até o valor
				while(cont<=p[i].valor){
				
					if(p[i].valor% cont==0)
						valor++;
				cont++;
				}
			if(valor==2){
				p[i].primo[0]='s'; //primeiro coloca o valor e depois mostra
				printf("\nO valor:%d eh primo ",p[i].valor);

			}
			else
				p[i].primo[0]='n';
			
		i++;		
		}

}
void conta_divisor(numero * p){
		
	for(int j=0;j<50;j++){
	p[j].divisores=0; //Inicalizar com Zero
	  int valor_div=1;
		while(valor_div<=p[j].valor){
			if(p[j].valor % valor_div == 0)
				p[j].divisores++;
			
			valor_div++;
		}
	}
}
void emprimir (numero * p){
	
	for(int i=0;i<50;i++){
		printf("\nValor: %2d - Eh primo(s/n)? %c - Qtd de dividore: %d",p[i].valor ,p[i].primo[0] ,p[i].divisores); //utilizar %c no lugar de %s quanto for apenas 1 letra
	}
}

int main(int argc, char** argv) {

	//Uso convencional - padrão vetor - NUTELLA
	// numero cadastro[50]; 
	
	//Se voce usar ponteiro, so pode alocar espaço com malloc - RAIZ. 
	numero * cadastra;
	cadastra= (numero*) malloc(50 * sizeof(numero)) ;
	
	
	
	cadastra = encrementar_numero(cadastra);
	conta_primo(cadastra);
	conta_divisor(cadastra);
	emprimir(cadastra);
	return 0;
}











