#include <stdio.h>

struct resultados {
	float divisao;
	float multiplicacao;
	float soma;
	float subtraco;
};
 
void calculadora(float x, float y) {
	struct resultados r;
	r.soma = x + y;
	r.multiplicacao = x * y;
	r.subtraco = x - y;
	r.divisao = x / y;
	
	printf("Soma: %.2f \n", r.soma);
	printf("Multiplicação: %.2f \n", r.multiplicacao);
	printf("Subtração: %.2f \n", r.subtraco);
	printf("Divisão: %.2f \n", r.divisao);
}

struct alunos{
	int matricula;
	float notas[3];
};

int mediaNotas(struct alunos a) {
	float soma;
	soma = a.notas[0] + a.notas[1] + a.notas[2];
	return (soma / 3);
}

int resultadoMediaNotas(struct alunos a) {
	if (mediaNotas(a) >= 7) {
		return 1;
	} else if ((mediaNotas(a) >= 4) && (mediaNotas(a) < 7)) {
		return 0;
	} else if (mediaNotas(a) < 4) {
		return -1;
	}
	
	return 0;
}

struct data {
	int dia;
	int mes;
	int ano;
};

int datasIguais(struct data data1, struct data data2) {	
	if ((data1.dia == data2.dia) && (data1.mes == data2.mes) && (data1.ano == data2.ano)) {
		return 1;
	}
	return 0;
}

int main() {
	
	/*
	float one = 10;
	float two = 10;
	calculadora(one, two);
	*/
	
	/*
	struct alunos aluno;
	
	aluno.notas[0] = 7;
	aluno.notas[1] = 4;
	aluno.notas[2] = 7;
	*/
	
	
	struct data d1, d2;

	printf("------- Primeira Data -------\n");
	
	printf("Dia: ");
	scanf("%d", &d1.dia);
	
	printf("Mes:");
	scanf("%d", &d1.mes);
	
	printf("Ano:");
	scanf("%d", &d1.ano);
	
	printf("------- Segunda Data -------\n");
	
	printf("Dia: ");
	scanf("%d", &d2.dia);
	
	printf("Mes: ");
	scanf("%d", &d2.mes);
	
	printf("Ano: ");
	scanf("%d", &d2.ano);
	
	int a = datasIguais(d1, d2);
	printf("%d", a);
	
	return 0;
}
