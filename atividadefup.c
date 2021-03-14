#include <stdio.h>

int main() {
	/* 1° - Maior número entre 4 variáveis */
	int a = 7;
	int b = 8;
	int c = 2;
	int d = 5;
	
	if ((a > b) && (a > c) && (a > d)){
		printf("Maior número é %d", a);
	}else if ((b > a) && (b > c) && (b > d)){
		printf("Maior número é %d", b);
	}else if ((c > b) && (c > a) && (c > d)){
		printf("Maior número é %d", c);
	}else {
		printf("Maior número é %d", d);
	} 
	
	/* 2° - Retorna Verdadeiro se a variavel A estiver entre os números B e C*/
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a > b) && (a < c)){
		printf("Verdadeiro");
	}else {
		printf("Falso");
	}
	
	/* 3° - Saber o resto da divisão entre dois números */
	int a, b, resto;
	scanf("%d %d", &a, &b);
	
	resto = a % b;
	printf("O resto da divisao é: %d", resto);

	/* 4° - Saber se o numero é impar */
	int a;
	scanf("%d", &a);
	
	if (a % 2 == 0) {
		printf("O número não é Impar");
	} else {
		printf("O número é Impar");
	}
	
	/* 5° - Retorna verdadeiro se o numero dado é multiplo de 3 */
	int numero;
	scanf("%d", &numero);
	
	if(numero % 3 == 0) {
		printf("Verdadeiro");
		return 1;
	}else {
		printf("Falso");
		return 0;
	}
	
	/* 6° - Saber se o primeiro número é multiplo do segundo */
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (a % b == 0) {
		return 1;
	} else {
		return 0;
	}

	return 0;
}
