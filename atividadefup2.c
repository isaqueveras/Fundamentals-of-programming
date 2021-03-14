#include <stdio.h>

int main() {
	// 1° Calculadora
	int n1, n2, soma, divisao, multiplicacao, subtracao, opt;
	
	printf("Digite dois numeros: ");
	scanf("%d %d", &n1, &n2);
	
	printf("--> Menu <-- \n");
	printf("1 - Soma \n");
	printf("2 - Divisao \n");
	printf("3 - Multiplicacao \n");
	printf("4 - Subtracao \n");
	
	scanf("%d", &opt);
	
	if (opt == 1) {
		soma = n1+n2;
		printf("A soma entre %d e %d é: %d", n1, n2, soma);
	} else if (opt == 2) {
		divisao = n1/n2;
		printf("A divisao entre %d e %d é: %d", n1, n2, divisao);
	} else if (opt == 3) {
		multiplicacao = n1*n2;
		printf("A Multiplicacao entre %d e %d é: %d", n1, n2, multiplicacao);
	} else if (opt == 4) {
		subtracao = n1-n2;
		printf("A Subtracao entre %d e %d é: %d", n1, n2, subtracao);
	} else {
		printf("Informe um numero do menu valido!");
	}
	
	// 2° Ajuste Salarial
	float salario, salarioReajustado;
	
	printf("Informe o seu salario: ");
	scanf("%f", &salario);
	
	if (salario <= 1000) {
		salarioReajustado = salario + (salario * 0.2);
		printf("Seu salario com um reajuste fica: %2.f", salarioReajustado);
	} else if ((salario >= 1000) && (salario <= 1500)) {
		salarioReajustado = salario + (salario * 0.15);
		printf("Seu salario com um reajuste fica: %2.f", salarioReajustado);
	} else if ((salario >= 1500) && (salario <= 2000)) {
		salarioReajustado = salario + (salario * 0.10);
		printf("Seu salario com um reajuste fica: %2.f", salarioReajustado);
	} else if (salario >= 2000) {
		salarioReajustado = salario + (salario * 0.05);
		printf("Seu salario com um reajuste fica: %2.f", salarioReajustado);
	}
	
	// 3° Exercício
	int num;
	scanf("%d", &num);
	
	if(num % 3 == 1) {
		printf("1");
		return 1;
	}else if(num % 5 == 0){
		printf("0");
		return 0;
	}
	
	// 4° 
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	
	if (((num2 > -1) && (num2 < 50)) && ((num1 > 50) && (num1 < 200))) {
		printf("Verdadeiro");
	}else {
		printf("Falso");
	}
	
	// 5°
	int num1, num2, resto;
	scanf("%d %d", &num1, &num2);
	resto = (num1 % num2) * num1;
	
	if (resto % 2 == 0) {
		printf("Resultado Final: %d", resto / 2);
		return 1;
	} else {
		return 0;
	}
	
	return 0;
}
