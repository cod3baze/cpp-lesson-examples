#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

using namespace std;

void regras();
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

  regras();
  menuprincipal();

  return 0;
}

void regras()
{
  printf("================= Bem vindo ao jogo X ================\n");
  printf("======================================================\n");
  printf("O jogo contém 30 perguntas \n");
  printf("Sendo elas 10 faceis, 10 intermediárias e 10 dificeis! \n");
  printf("Ao longo do jogo você terá 3 vidas e 2 ajudas! \n");
  printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");

  system("pause");
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
    printf("[0] - para sair do jogo! \n");
    printf("[1] - para iniciar o jogo! \n\n");
    printf("JOGADOR-01 >> ");
    scanf("%i", &status);

    if (status == 1)
    {
      statusmenu();
      iniciar();
    }
    else
    {
      finalizar();
      break;
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
  string opcao;
  int continuar;

  for (int c = 0; c <= 2; c++)
  {
    cout << "[5 pontos] - " << nivel01[c] << endl;
    printf("A - SIM \n");
    printf("B - NAO \n");
    printf("C - TALVEZ \n\n");

    printf("- - - - - - - - - - - - - - - - - - - - \n");
    printf("AJUDA - pedir ajuda aos universitarios \n");
    printf("- - - - - - - - - - - - - - - - - - - - \n\n");

    printf("JOGADOR-01 >> ");
    scanf("%c", &opcao);

    if (opcao == "A")
    {
      printf("RESPOSTA ERRADA! \n");
      printf("B - É A OPCAO CORRETA. \n");
      if (vidas >= 1)
      {
        printf("continuar jogando? 1 - SIM, 0 - NAO \n");
        printf("JOGADOR-01 >> ");
        scanf("%i", &continuar);

        if (continuar == 0)
        {
          finalizar();
          break;
        }
      }
      else
      {
        printf("VOCE JA USOU TODAS VIDAS");
        finalizar();
      }
    }
    // RESPOSTA CERTA
    else if (opcao == "B")
    {
      printf("B - RESPOSTA CERTA :D \n");
      printf("CONTINUE. \n");
    }
    else if (opcao == "C")
    {
      printf("RESPOSTA ERRADA! \n");
      printf("B - É A OPCAO CORRETA. \n");
    }
    else if (opcao == "AJUDA")
    {
      if (ajudas >= 1 && ajudas <= 3)
      {
        ajudas -= 1;
      }
    }
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
