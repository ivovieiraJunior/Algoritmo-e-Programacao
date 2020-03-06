#include <iostream>

/* Desenvolva um algoritmo que calcule o n-´esimo termo de uma s´erie de fibonacci.
• S´erie de fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 . . .
• OBS.: O n-´esimo termo ´e obtido a partir dos dois anteriores */
int fibo(int a,int b,int c){
	int i=0;
	if(i<=c)		
		return (a +(fibo((a+b),(b=a),i++)));	
	return b;
}
int main(int argc, char** argv) {
	int atual=1,anterior=1,contador;
	printf("digite o fibonacci de:");
	scanf("%d", &contador);
	
	printf("o fibonacci de %d eh %d ",contador ,fibo(atual,anterior,contador));
	return 0;
}
