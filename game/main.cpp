#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

using namespace std;

void regras();
void statusMenu();
void menuPrincipal();
int avalia_resposta(char opcao, char correta);
void iniciar();
void finalizar();
void ajudaUniversitarios();

int
    vidas = 3,
    ajudas = 2,
    pontuacao_atual = 0;

class Question
{
public:
  string title;
  char answer;
  string opcaoA;
  string opcaoB;
  string opcaoC;
  string opcaoD;

  Question(
      string tit,
      char ans,
      string a, string b, string c, string d)
  {
    title = tit;
    answer = ans;
    opcaoA = a;
    opcaoB = b;
    opcaoC = c;
    opcaoD = d;
  }
};
int main()
{
  setlocale(LC_ALL, "Portuguese");

  regras();
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
  printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
}

void statusMenu()
{
  printf("========= GAME ========== \n");
  printf("========================= \n");
  printf("== Vidas restantes: %i \n", vidas);
  printf("== Ajudas restantes: %i \n", ajudas);
  printf("== Pontuacaoo atual: %i \n", pontuacao_atual);
  printf("- - - - - - - - - - - - - \n\n");
}

void menuPrincipal()
{
  int status;

  do
  {
    printf("[0] - para sair do jogo \n");
    printf("[1] - para começar o jogo \n\n");
    printf("JOGADOR-01 >> ");
    scanf("%i", &status);

    if (status == 1)
    {
      system("cls");
      statusMenu();
      iniciar();
    }
    else
    {
      finalizar();
      break;
    }

  } while (status != 0);
}

Question questions01[5] = {
    Question("Existe mais de 1 polo norte. voçê sabe quantos são?", 'A', "Pelo menos tres Polos Nortes", "Dois polo norte", "Nenhuma das opcoes", "Apenas um polo norte"),

    Question("Quais dessas regiões não faz parte do territótio Ártico?", 'C', "Canada", "Groenlandia", "China", "EUA"),

    Question("O polo norte se banha em qual oceano?",
             'B',
             "Oceano Atlantico", "Oceano Glacial Artico", "Oceano Pacifico", "Nenhuma das opcoes"),

    Question("Quias desses animais NÃO é possível ver no Polo Norte?",
             'D', "Baleia Jubarte", "Leao marinho", "Peixe", "Pinguim-imperador"),

    Question("Qual é mais frio, o Polo norte ou o Polo sul?",
             'A', "Polo Sul", "Polo Norte", "Ambos", "Nenhum")};

void iniciar()
{
  char opcao;

  for (int c = 0; c <= 3; c++)
  {
    cout << "5 pontos - " << questions01[c].title << endl;
    cout << "\t A - " << questions01[c].opcaoA << endl;
    cout << "\t B - " << questions01[c].opcaoB << endl;
    cout << "\t C - " << questions01[c].opcaoC << endl;

    printf("\n - - - - - - - - - - -- -  -- - - - -");
    printf("\n R - PARA PEDIR AJUDA AOS UNIVERSITARIOS");
    printf("\n - - - - - - - - - - -- -  -- - - - -");

    printf("\n\n JOGADOR-01 >> ");
    cin >> opcao;

    if (opcao == 'R')
    {
      if (ajudas >= 1)
      {
        printf("\n AJUDA UNIVERSITARIOS!!!");
        ajudas -= 1;

        printf("\n\n JOGADOR-01 >> ");
        cin >> opcao;
      }
      else
      {
        printf("\n VOCE NAO TEM MAIS AJUDAS DISPONIVEIS");

        printf("\n\n JOGADOR-01 >> ");
        cin >> opcao;
      }
    }
    if (opcao == 'F')
    {
      break;
    }

    int res = avalia_resposta(opcao, questions01[c].answer);
    system("pause");
    system("cls");
    statusMenu();

    if (res == 0) // se resposta errada
    {
      if (vidas >= 1)
      { // se tiver vidas
        continue;
      }
      else
      {
        printf("Suas vidas acabaram! \n");
        system("pause");
        finalizar();
        break;
      }
    }
  }
};

/*
  * REMOVER CONSUANTE O NIVEL
*/
int avalia_resposta(char opcao, char correta)
{
  if (opcao == correta)
  {
    printf("\n Resposta certa \n");
    pontuacao_atual += 5;

    return 1;
  }
  else
  {
    printf("\n Resposta errada! \n");
    printf("\n RESPOSTA CORRETA - %c \n", correta);
    vidas -= 1;

    return 0;
  }
}

void finalizar()
{
  system("cls");
  printf("========= PARTIDA FINALIZADA ========== \n");
  printf("PONTOS %i DE 100 \n\n", pontuacao_atual);
  printf("- - - - - - - - - - - - - - - - - - - - \n\n");
  system("pause");

  vidas = 3,
  ajudas = 2,
  pontuacao_atual = 0;
};

void ajudaUniversitarios(string titulo, string errada, char correta)
{
  system("cls");

  printf("\n - - - - - - - - - - -- -  -- - - - -");
  printf("\n  AJUDA DOS UNIVERSITARIOS");
  printf("\n - - - - - - - - - - -- -  -- - - - -");

  cout << "5 pontos - " << endl;
  cout << "A - " << endl;
  cout << "B - " << endl;
  cout << "C - " << endl;
}
