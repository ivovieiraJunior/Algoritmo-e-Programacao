#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[20];
	int idade;
	char sexo;
	char continuar= 'S';
	char nomeidoso[20];
	int soma_idade=0;
	int numero_mulher=0;
	int contadormasc=0;
	int idadeidoso=0;
	char nomemulher[20];
	float media;
	

	while(continuar == 'S'){
		printf("Digite um nome e sobrenome:");
		scanf(" %[A-Za-z 0-9]s",&nome);
		printf("Digite a idade:");
		scanf("%d",&idade);
		printf("Digite o sexo( M , F):");
		scanf(" %c", &sexo);
			if(sexo == 'M'){
				contadormasc++;
				soma_idade = soma_idade +idade;
			}
			else if(sexo == 'F'){
				numero_mulher++;
				strcpy(nomemulher, nome);
		}
		if(idade > idadeidoso){
			idadeidoso=idade;
			strcpy(nomeidoso, nome);
		}printf("\n deseja continuar ? ( S ou N ):\n");
		scanf("%c",&continuar);
	}
	media = soma_idade/contadormasc;
	printf("a media de idade dos homens e: %.2f\n",media);
	printf("a quantidade de mulheres e: %d\n",numero_mulher);
	printf("o nome da pessoa mais idosa e: %s\n",nomeidoso);
	printf("o nome da ultima mulher do cadastro e: %s",nomemulher);
	
	system("pause");
	return 0;
}

