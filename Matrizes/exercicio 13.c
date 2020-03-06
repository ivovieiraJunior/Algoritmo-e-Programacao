#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int matriz [7][7] ={0,2,11,6,15,11,1,
							2,0,7,12,4,2,15,
							11,7,0,11,8,3,13,
							6,12,11,0,10,2,1 ,
							15,4,8,10,0,5,13,
							11,2,3,2,5,0,14,
							1,15,13,1,13,14,0};
		int i=0;
		int j=0;
		int cidade1;
		int cidade2;
		
		for(i = 0; i<7; i++){
			
			for(j=0; j<7; j++){
				
			printf(" %d, ", matriz[i][j]);
			
			}printf("\n");}
		
			for(i=0;cidade2 = cidade2;i++){
				printf("\n digite uma cidade:");
				scanf("%d",&cidade1);
				printf("digite outra cidade:");
				scanf("%d",&cidade2);
				printf("tempo emtre uma cidade e outra eh %d",matriz[cidade1][cidade2]);
				
				
			}
	
	return 0;
}
