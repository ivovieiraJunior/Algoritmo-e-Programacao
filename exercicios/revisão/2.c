#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/* 2) Crie um função que ao receber uma string,
 devolva a string convertida em maiúscula.  
 DICA:	
 	int i=0;
	while((v[i])!='\0'){
		int a = int (v[i]);
		a-=32;
		v[i]=char(a);
		i++;
	return v;
 }*/
char *convert( char *palavra ){
 	int i = 0;
	while((palavra[i])!= '\0'){
		int a;
		char a = int (palavra[i]);
		a -=32;
		palavra[i]=char(a);
		i++;
	}
	return frase;
	
}
int main() {
	char palavra[1024];
		printf("\n digite uma palavra:");
		scanf("%s",	palavra);		
		printf("\n a palavra eh [%s]",inverte(palavra));		
	return 0;
}
