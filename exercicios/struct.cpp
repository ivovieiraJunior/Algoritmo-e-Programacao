#include <iostream>
#include <string.h>
/* •Faça um programa que leia uma string qualquer (até 1024 bytes)
•Após, faça uma função que retorne
 o tamanho de caracteres da string.
Obs.: Não utilizar strlen(). */
int string(char *A){
	int j=0;
	while(A[j]!='\0'){
		j++;
	}
	return j;
}
int main(int argc, char** argv) {
	char frase[1024];
	printf("digite a frase:");
	scanf("%[A-Za-z ]s", &frase);
	printf(" numero de letras eh: %d", string(frase));
	return 0;
}
