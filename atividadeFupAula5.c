#include <stdio.h>

int main() {
	int contador = 0;
	for(int i = 1; i <= 10; i++) {
		contador = contador + i;
	}
	
	printf("%d", contador);
	
	int valor;
	int num = 0;
	scanf("%d", &valor);
	
	for(int i = 0; i <= valor; i++) {
		num = num + i;
	}
	printf("%d", num);
	
	int valor;
	int num = 0;
	scanf("%d", &valor);
	
	if (valor % 2 == 0) {
		for(int i = 0; i <= valor; i++)
			num = num + i;
		printf("%d", num);
	} else {
		printf("Numero Impar");
	}
	
	int somatoria = 0;
	for (int i = 0; i < 200; i++) {
		if((i % 3 == 0) && (i % 7 != 0)) {
			somatoria = somatoria + i;
		}
 	}
 	printf("%d", somatoria);
	
	int bacteria = 1;
	int segundos;
	
	printf("Segundos: ");
	scanf("%d", &segundos);
	
	for (int i = 0; i < segundos; i++) {
		bacteria = bacteria * 2;
	}
	
	printf("%d", bacteria);
	return 0;
}
