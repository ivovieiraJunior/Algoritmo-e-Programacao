#include <iostream>
#include <string.h>
/* �Fa�a um programa que leia uma string qualquer (at� 1024 bytes)
�Ap�s, fa�a uma fun��o que retorne
 o tamanho de caracteres da string.
Obs.: N�o utilizar strlen(). */
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
