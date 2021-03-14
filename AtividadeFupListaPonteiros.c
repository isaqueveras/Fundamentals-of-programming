#include <stdio.h>

struct Aluno {
	char *nome;
	int idade;
	float peso;
};

int somaIdadeAlunos(struct Aluno alunos, int tam) {
	int res;
	for (int i = 0; i < tam; i++)
		res += alunos.idade;

	return res;
}

int main() {
	return 0;
}
