#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

void regras();
void menuPrincipal();
void iniciar();
void finalizar();
void statusMenu();

int
    vidas = 3,
    ajudas = 2,
    pontuacao_atual = 0;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  regras();
  system("pause");

  menuPrincipal();

  return 0;
}

void regras()
{
  printf("================= Bem vindo ao jogo X ================\n");
  printf("======================================================\n");
  printf("O jogo contém 30 perguntas \n");
  printf("Sendo elas 10 faceis, 10 intermediárias e 10 dificeis! \n");
  printf("Ao longo do jogo você terá 3 vidas e 2 ajudas! \n");
  printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
}

void statusMenu()
{
  printf("=========================\n", vidas);
  printf(" vidas restantes %i \n", vidas);
  printf(" ajudas restatantes %i \n", ajudas);
  printf(" pontuação atual %i \n", pontuacao_atual);
  printf("=========================\n\n", vidas);
}

void menuPrincipal()
{
  int status;

  do
  {
    system("cls");

    statusMenu();

    printf("[0] - para sair do jogo \n");
    printf("[1] - para começar o jogo \n\n");
    printf("JOGADOR-01 >> ");
    scanf("%i", &status);

    if (status == 1)
    {
      iniciar();
    }
    else
    {
      finalizar();
    }

  } while (status != 0);
}

void iniciar()
{
  printf("Iniciando \n");
  system("pause");
};

void finalizar()
{
  printf("JOGO FINALIZADO \n");
  printf("pontos %i de 100 \n", pontuacao_atual);
  system("pause");
};
