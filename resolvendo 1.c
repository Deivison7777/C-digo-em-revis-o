#include <stdio.h>
#include <stdlib.h>

struct informacao_aluno
{
  char nomeTurma[1000];
  char nome [2000];
  float nota[2];
  float media;
  int idade;
};
struct informacao_professor
{
  char nome[1000];
  char disciplina[2];
  char turmas[2];
};

int main (){

struct informacao_aluno aluno[3];
struct informacao_professor professor [2];
int soma = 0;
int i, j, k;

for (i = 0; i < 3; i++){
printf("\n Coletando dados do aluno...\n\n");
printf("Nome da turma: ");
gets(aluno[i].nomeTurma);

printf("Nome do %d° aluno: ", i + 1);
gets(aluno[i].nome);
setbuf(stdin,0);
printf("Idade: ");
scanf("%d", &aluno[i].idade);
setbuf(stdin,0);

for (j = 0; j < 2; j++){

printf("Digite a %d° nota do aluno: ", j + 1);
scanf("%f", &aluno[i].nota[j]);

}
}










return 0;
}
