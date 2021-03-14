#include <stdio.h>

// 1° questão
int maior_numero(int a,int b,int c,int d) {
	if ((a > b) && (a > c) && (a > d)) {
		printf("O maior número é %d", a);
	}else if ((b > a) && (b > c) && (b > d)) {
		printf("O maior número é %d", b);
	}else if ((c > b) && (c > a) && (c > d)) {
		printf("O maior número é %d", c);
	}else {
		printf("O maior número é %d", d);
	}
	
	return 0;
}

// 2° questão
int entre_dois_numeros(int a, int b, int c) {
	
	if (((a <= c) && (b <= a)) || ((a <= b) || (a >= c))) {
		printf("A está no meio");
	} else {
		printf("Falso");
	}
	
	return 0;
	
}

// 3° questão
int resto_da_divisao() {
	int n1, n2, res;
  
	printf ("\nDigite um numero:");
	scanf ("%d", &n1);

	printf ("\nDigite um numero:");
	scanf ("%d", &n2);

	res = n1 % n2;
	printf("Resultado: %d", res);
	
	return 0;
}

// 4° questão
int eh_par(int num){
	if (num % 2 == 0) {
		printf("Verdadeiro");
	}else {
		printf("Falso");
	}
	return 0;
}

// 5° questão
int multiplo_de_tres(int num) {
	if (num % 3 == 0) {
		printf("Verdadeiro");
	}else {
		printf("Falso");
	}
	return 0;
}

// 6° questão
int multiplo_do_segundo(int a, int b) {
	if (a % b == 0) {
		printf("Verdadeiro");
	}else {
		printf("Falso");
	}
	return 0;
}

// 7° questão
int retorna_a_soma200() {
	int acomulador = 0;
	for (int i = 0; i <= 200; i++) {
		if  ((i % 3 == 0) && (i % 7 != 0)) {
			printf("%d \n", i);
			acomulador = acomulador + i;
		}
	}
	return acomulador;
}

// 8° questão
int eh_primo(int numero) {
	int resultado = 0;
	
	if (numero <= 1) {
		return 0;
	}
	
	for (int i = 2; i < numero / 2; i++) {
		if (numero % i == 0) {
			resultado++;
			return 0;
		}
	}
	
	if (resultado == 0) {
		printf("Primo \n");
	}else {
		printf("Não primo \n");
	}
	
	return 1;
}

// 9° questão
int questaonona(int num) {
	int npri = 0;
	int pri = 0;
	
	for (int i = 0; i <= num; i++) {
		if (eh_primo(i) == 0) {
			npri = npri + i;
		}
		
		if (eh_primo(i) == 1) {
			pri = pri + i;
		}
	}
	
	return npri - pri;
}

// 10° questão
int some_os_primos(int num) {
	int pri = 0;
	
	for (int i = 0; i < num; i++) {
		if (eh_primo(i) == 1) {
			pri = pri + i;
		}
	}
	
	return pri;
}


int main() {
	// 1° questão
	//maior_numero(1,5,3,4);
	
	// 2° questão
	//entre_dois_numeros(6,5,7);
	
	// 3° questão
	//resto_da_divisao();
	
	// 4° questão
	//eh_par(2);
	
	// 5° questão
	//multiplo_de_tres(3);
	
	// 6° questão
	//multiplo_do_segundo(2,2);
	
	// 7° questão
	//int y = retorna_a_soma200();
	//printf("%d", y);
	
	// 8° questão
	//eh_primo(4);
	
	// 9° questão
	//int b = questaonona(3);
	//printf("%d", b);
	
	// 10° questão
	//int f = some_os_primos(21);
	//printf("soma: %d", f);
	
}



