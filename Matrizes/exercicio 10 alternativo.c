#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int Var[20];
	int Maiorpeso;
	int posicao1;
	int posicao2;
	int Menorpeso;
	float peso_medio;
	float soma_pesos=0;
	int i;
	
	i=0;
	// encrementei o valor da primeiro vetor antes do for caso o usuario coloca-se direto o primeiro o menor valor ele encrementase como o menor e assim
	printf("Digite um valor:");
	scanf("%d", &Var[i]);
	Maiorpeso= Var[i];
	Menorpeso= Var[i];
	soma_pesos=Var[i];
	for(i=1;i< 3; i++ ){
		
		printf("Digite um valor:");
		scanf("%d", &Var[i]);
		if(Var[i]>Maiorpeso){
			Maiorpeso=Var[i];
			posicao1= i;
			soma_pesos= soma_pesos + Var[i];
		}
		else if(Var[i]<Menorpeso){
			Menorpeso=Var[i];
			posicao2=i;
			soma_pesos= soma_pesos + Var[i];
		}
	}
	peso_medio= soma_pesos/ 3;
	
printf("a soma dos pesos eh %.2f\n",soma_pesos);
printf("a media dos pesos eh %f\n",peso_medio);
printf("o mais pessado eh %d e esta na vetor[%d]\n", Maiorpeso, posicao1);
printf("\n o menos pessado eh %d e esta no vetor[%d]\n", Menorpeso, posicao2);
	return 0;
}
