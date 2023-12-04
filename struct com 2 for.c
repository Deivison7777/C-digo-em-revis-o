#include <stdio.h>
#include <stdlib.h>

struct informacao_funcionario
{
  char nome[1000];
  int data;
  int matricula;
  char endereco [2000];
};
struct informacao_cliente
{
  char nome[1000];
  int nascimento;
  char endereco[1000];
};

int main ()
{

  struct informacao_funcionario funcionario[3];
  struct informacao_cliente cliente[3];
  int i, j;

  for (i = 0; i < 3; i++)
    {

      printf ("\n Coletando dados do funcionario: \n");
      printf ("Informe o nome do %d° funcionario: ", i + 1);
      gets (funcionario[i].nome);

      printf ("Informe a datade admissao: ");
      scanf ("%d", &funcionario[i].data);
      setbuf (stdin, 0);
      printf ("Informe a matricula: ");
      scanf ("%d", &funcionario[i].matricula);
      setbuf(stdin,0);
      printf ("Informe o seu endereco: ");
      gets (funcionario[i].endereco);
      setbuf (stdin, 0);
      for (j = 0; j < 3; j++)
	{
	  setbuf (stdin, 0);
	  printf ("\n Coletando dados do cliente: \n");
	  printf ("Informe o nome do %d° cliente: ", j + 1);
	  gets (cliente[j].nome);
	  
	  printf ("data de nascimento: ");
	  scanf ("%d", &cliente[j].nascimento);
	  
	  setbuf (stdin, 0);
	  printf ("Informe o seu endereco: ");
	  gets(cliente[j].endereco);

	}

    }






  return 0;
}
