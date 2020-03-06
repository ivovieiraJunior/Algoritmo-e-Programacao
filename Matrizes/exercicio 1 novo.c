#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char mostrar (){
	char matriz[10][10];
	int i=0;
	int j=0;
	for(i = 0; i<10; i++){
		for(j=0; j<10; j++){	
		printf(" %c ", matriz[i][j]);	
		} printf("\n");}
}
int main(int argc, char *argv[]) {
	char matriz[10][10];
	int i=0;
	int j=0;
	
	//exer 1
		for(i=0;i<=9;i++){
			for(j=0;j<10;j++){
			
				if(i<5){
					matriz[i][j]='*';
				}
				else{
					matriz[i][j]='-';				
				}
				printf(" %c ", matriz[i][j]);
			}
			printf("\n");
		}
		
		///exercicio 2
		printf ("\n exercicio 2 \n");
		for(i=0;i<=9;i++){
			for(j=0;j<10;j++){
				if(i%2==0){
					matriz[i][j]='*';
				}
				else{
					matriz[i][j]='-';
				}printf(" %c ", matriz[i][j]);
			}
			printf("\n");
		}
		printf ("\n exercicio 3 \n");
		
		//exercicio 3
		
		for(i=0;i<=9;i++){
			for(j=0;j<10;j++){
				if(j%2==0){
					matriz[i][j]='*';
				}
				else{
					matriz[i][j]='-';
				}printf(" %c ", matriz[i][j]);
			}
			printf("\n");
		}
		
		
		
		/// exercicio 4
		printf("\n exercicio 4 \n");
		for(i=0;i<=9;i++){
			for(j=0;j<10;j++){
				if(i<5 && j<5 || i>=5 && j>=5){
					matriz[i][j]='*';
				}
				else{
					matriz[i][j]='-';
				}printf(" %c ", matriz[i][j]);
			}printf("\n");
		}
		
		///exercicio 5
		printf("\n exercicio 5\n");
		
		for(i=0; i<10;i++){
			for(j=0;j<10;j++){
				if(i==j){
					matriz[i][j]='*';						
				}
				else{
					matriz[i][j]='-';
				}	printf(" %c ", matriz[i][j]);
			}printf("\n");
		}
	
		////exercicio 5.2
		printf("\n exercicio 5.2 \n");
		
		for(i=0; i<10;i++){
			for(j=0;j<10;j++){
				if(i==0 ||j==9 || j==0 || i==9){
					matriz[i][j]='*';						
				}
				else{
					matriz[i][j]='-';
				}	printf(" %c ", matriz[i][j]);
			}printf("\n");
		}
	return 0;
}
