#include <stdio.h>

// 1° Questão
int mediaDasNotas(int a, int b, int c) {
	int media;
	media = (a+b+c)/ 3;
	return media;
}

// 2° Questão
int mediaPonderada(int n1, int p1, int n2, int p2, int n3, int p3) {
	int media;
	media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
	return media;
}

// 3° Questão
int quadradoDoNumero(int num) {
	return num = num * num;
}

// 4° Questão
int imc(float peso, float altura) {
	float imc;
	
	imc = peso / (altura * altura);
	return imc;
}

// 5° Questão
float CelsiusParaFahrenheit(float Celsius) {
	float Fahrenheit;
	Fahrenheit = Celsius * 1.8 + 32;
	return Fahrenheit;
}

// 6° Questão (a)
float volumeDaCaixa(float a, float b, float c) {
	float volume;
	volume = a * b * c;
	return volume;
}

// 6° Questão (b)
float areaDaCaixa(float a, float b, float c) {
	float area;
	area = 2 * ((a * b) + (a * c) + (b * c));
	return area;
}

// 7° Questão
int mdc(int num1, int num2) {
	if (num1 % num2 == 0) {
		return num2;
	}else {
		return mdc(num2, num1%num2);
	}
}

int main() {
	
	// 1° Questão
	/*
	int a,b,c;
	printf("Informe 3 números \n");
	scanf("%d %d %d", &a, &b, &c);
	
	int z = mediaDasNotas(a,b,c);
	printf("A Média é %d", z);
	
	*/
	
	// 2° Questão
	/*
	int n1, n2, n3, p1, p2, p3;
	
	printf("Informe 3 notas: \n");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	printf("Informe os 3 pesos respectivo das notas acima: \n");
	scanf("%d %d %d", &p1, &p2, &p3);
	
	int y = mediaPonderada(n1,p1,n2,p2,n3,p3);
	printf("A Média Ponderada é %d", y);
	
	*/
	
	// 3° Questão
	/*
	int num;
	printf("Informe um número: ");
	scanf("%d", &num);
	int q = quadradoDoNumero(num);
	printf("O quadrado do numero %d é %d", num, q);
	*/
	
	// 4° Questão
	/*
	int i = imc(63, 1.80);
	printf("%d", i);
	*/
	
	// 5° Questão
	/*
	float tem;
	printf("Informe uma temperatura em °C: ");
	scanf("%f", &tem);
	float c = CelsiusParaFahrenheit(tem);
	printf("%.2f°F", c);
	*/
	
	// 6° Questão (a)
	/*
	float a, b, c;
	printf("informe os 3 paramentros da caixa: \n");
	scanf("%f %f %f", &a, &b, &c);
	float v = volumeDaCaixa(a,b,c);
	printf("O volume da caixa é %.2f", v);
	*/
	
	// 6° Questão (b)
	/*
	float a, b, c;
	printf("informe os 3 paramentros da caixa: \n");
	scanf("%f %f %f", &a, &b, &c);
	float ar = areaDaCaixa(a,b,c);
	printf("A area da caixa é %.2f", ar);
	*/
	
	// 7° Questão
	int num1, num2;
	printf("Informe 2 números: \n");
	scanf("%d %d", &num1, &num2);
	int md = mdc(num1, num2);
	printf("O MDC é %d", md);
	
	
	return 0;
}
