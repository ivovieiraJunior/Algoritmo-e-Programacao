#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
			int matris [7][7] ={2,2,11,6,15,11,1,
								2,14,7,12,4,2,15,
								11,7,13,11,8,3,13,
								6,12,11,13,10,2,1 ,
								15,4,8,10,14,5,13,
								11,2,3,2,5,13,14,
								1,15,13,1,13,14,2};
			int i,j,temp;
			int soma=0;
			
		for(i = 0; i<7; i++){
			
			for(j=0; j<7; j++){
				
			printf(" %d, ", matris[i][j]);
			
			} printf("\n");}
			 temp;
    

    for(i=0;i<7;i++){
        temp = matris[i][0];
        matris[i][0] = matris[i][6];
        matris[i][6] = temp;
    }
	printf("Inverta os valores da primeira Coluna com a última\n");
	for(i = 0; i<7; i++){
		for(j=0; j<7; j++){	
			printf(" %d, ", matris[i][j]);	
			} printf("\n");}
	
			 
	 for(j=0;j<7;j++){
        temp = matris[0][j];
        matris[0][j] = matris[6][j];
        matris[6][j] = temp;
    }
    printf("Inverta os valores da primeira linha com a última\n");
    	for(i = 0; i<7; i++){
		for(j=0; j<7; j++){	
		printf(" %d, ", matris[i][j]);	
		} printf("\n");}
    
      for(i=0;i<7;i++){
      	
		  for(j=0;j<7;j++){
		  	soma += matris[i][j];
		  }
      }
    printf("soma da matris eh:%d",soma);

				
	return 0;
}	
//	a) Inverta os valores da primeira Coluna com a última (mostrar a matriz);
//	b) Inverta os valores da primeira linha com a última. (mostrar);
//	c) Mostrar a soma das linhas e colunas. 
//	d) Mostrar a soma da matriz.

