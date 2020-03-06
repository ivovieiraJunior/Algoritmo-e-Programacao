#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/* 4) Fazer um programa para popular uma matriz 10x10 com valores aleatórios entre 01 e 100.
O programa deverá ter um procedimentopara preencher 
e outro para mostrar a matriz e 
uma funçãopara somar e outra para localizar o maior valor. */

void matriz(){
	char a[10][10];
	int i;
	int j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			srand(time(NULL));
			a[i][j]= rand()%10;
			sleep(1);
		}//== for j ==
	}//==for i ==
}//== matriz ==
void emprimir(){
	char a[10][10];
	int i;
	int j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ", a[i][j]);
		}printf("\n");//== for j ==
	}//== for i == 
}//== emprimir ==
void comparar(int maior,int a[10][10],int i,int j){
	if(a[i][j]>maior){
		maior=a[i][j];
		
	}//== if maior ==
}//== comparar ==
int main(int argc, char *argv[]) {
	char a[10][10];
	int maior=0,soma=0;
	matriz();
	emprimir();
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			soma+=a[i][j];
			if(a[i][j]>maior){
				maior=a[i][j];	
			}	
		}
	}	
	printf("%.2d\n",soma);
	printf("%d\n",maior);
	return 0;
}
