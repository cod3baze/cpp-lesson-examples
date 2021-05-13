#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

using namespace std;

void statusmenu();
void menuprincipal();
void iniciar();
void finalizar();

int vidas = 3;
int ajudas = 2;
int pontuacao_atual = 0;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  menuprincipal();

  return 0;
}

void statusmenu()
{
  printf("========= GAME ========== \n");
  printf("========================= \n");
  printf("== Vidas restantes: %i \n", vidas);
  printf("== Ajudas restantes: %i \n", ajudas);
  printf("== Pontuação atual: %i \n", pontuacao_atual);
  printf("- - - - - - - - - - - - - \n\n");
}

void menuprincipal()
{
  int status = 0;

  do
  {
    system("cls");

    statusmenu();

    printf("[0] - para sair do jogo! \n");
    printf("[1] - para iniciar o jogo! \n\n");
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

string nivel01[3] = {
    "Existe mais de 1 polo norte. voçê sabe quantos são?",
    "Quais dessas regiões não faz parte do territótio Ártico?",
    "O polo norte se banha em qual oceano?"};

string nivel02[2] = {
    "Quias desses animais NÃO é possível ver no Polo Norte?",
    "Qual é mais frio, o Polo norte ou o Polo sul?"};

void iniciar()
{
  for (int c = 0; c <= 2; c++)
  {
    cout << "[0] - " << nivel01[c] << endl;
    system("pause");
  }
}

void finalizar()
{
  system("cls");

  printf("========= PARTIDA FINALIZADA ========== \n");
  printf("======================================= \n");
  printf("== VIDAS RESTANTES: %i \n", vidas);
  printf("== AJUDAS RESTANTES: %i \n", ajudas);
  printf("== PONTUAÇÃO %i DE 100 \n", pontuacao_atual);
  printf("- - - - - - - - - - - - - - - - - - - - \n\n");

  system("pause");
}
