#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 8) Escreva uma função recursiva que determine quantas vezes um CARATERE X
 ocorre em um STRING Y. 
		Por exemplo, o caractere A ocorre 3 vezes em "abacate".
Implementar usando laço de repetição (while ou  for) 
e outra usando recursividade.  */
int * contaletra(char * letra, char *palavra){
	int i=0;
	int j=0;
	while(palavra[i] !='\0'){
		if(strcmp(palavra[i],letra[0])!=0){
			j++;
		}
	i++;
	}
	return (j);	
}

int main(int argc, char *argv[]) {
	char palavra[30];
	char letra[2]={'a'};
	int valor;
	 printf("digite uma palavra:");
	 scanf("%s",&palavra);
	 printf("digite o caracter a procurar:");
	 scanf("%s", &letra);
	printf("determinada letra [%s] mostra total de [%d]vezes",letra, valor = contaletra(letra,palavra));
	 
	 
	return 0;
}
