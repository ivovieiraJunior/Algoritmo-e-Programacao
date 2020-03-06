#include <iostream>
#include <string.h>

/* Exercícios9) 
Fazer uma programa que leia uma frase. 
Após ler a frase, deverá colocar todas as vogais em maiúsculas. */

int main(int argc, char** argv) {
	char frase[100];
	char abc[6]={'a','e','o','u','i'};
		
		printf("digite a sua frase:");
		scanf("%[A-Za-z ]s",frase);
		for(int conta_for=0;conta_for<100;conta_for++){
			for(int conta_2=0;conta_2<6;conta_2++){
				if(strcmp((char *)frase[conta_for],(char*)abc[conta_2])==0){
					strupr((char*)frase[conta_for]);
				}
			}
			
		/*	
			if(frase[conta_for]=='a')
			frase[conta_for]='A';
			
			if(frase[conta_for]=='i')
			frase[conta_for]='I';
			
			if(frase[conta_for]=='o')
			frase[conta_for]='O';
			
			if(frase[conta_for]=='e')
			frase[conta_for]='E';
			
			if(frase[conta_for]=='u')
			frase[conta_for]='U';
		*/
		}
	printf("%s", frase);
	return 0;
}
