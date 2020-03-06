#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* dicas:
	intnumero[7] = {1,3,5,7,8,3,4};intpalavra[7] = “cafe\0”;
	
	if(palavra[i]=='\0')break;
	
	scanf("%[A-Za-z 0-9]s",&palavra); */

int main(int argc, char *argv[]) {
	char frase[50];
	
	int i;
	
	printf("Digite um frase:");
	scanf("%[A-Za-z 0-9]s",&frase);

	for(i=0;i<100;i++){
		if(frase[i]== 'a'){
			frase[i]= 'A';
		}
		else if (frase[i]== 'e'){
			frase[i]='E';
		}
		else if(frase[i]== 'i'){
			frase[i]= 'I';
		}
		else if(frase[i]== 'o'){
			frase[i]='O';
		}
		else if(frase[i]== 'u'){
			frase[i]= 'U';
		}
		else if(frase[i]=='\0')break;
	}
	printf("%s", frase);
	
	return 0;
}
