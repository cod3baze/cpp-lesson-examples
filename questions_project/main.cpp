#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

using namespace std;

void regras();
void statusmenu();
void menuprincipal();
int avalia_resposta(char opcao, char correta);
void iniciar();
void finalizar();
void ajudaUniversitarios();

int vidas = 3;
int ajudas = 2;
int pontuacao_atual = 0;

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
  menuprincipal();

  return 0;
}

void regras()
{
  printf("================= Bem vindo ao jogo X ================\n");
  printf("======================================================\n");
  printf("O jogo contém 30 perguntas \n");
  printf("Sendo elas 10 faceis, 10 intermediárias e 10 dificeis! \n");
  printf("Ao longo do jogo voce tera 3 vidas e 2 ajudas! \n");
  printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
}

void statusmenu()
{
  printf("========= GAME ========== \n");
  printf("========================= \n");
  printf("== Vidas restantes: %i \n", vidas);
  printf("== Ajudas restantes: %i \n", ajudas);
  printf("== Pontuacaoo atual: %i \n", pontuacao_atual);
  printf("- - - - - - - - - - - - - \n\n");
}

void menuprincipal()
{
  int status = 0;

  do
  {
    printf("[0] - para sair do jogo! \n");
    printf("[1] - para comecar uma nova partida! \n\n");
    printf("JOGADOR-01 >> ");
    scanf("%i", &status);

    if (status == 1)
    {
      system("cls");
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

// - - - - - - --  - - - -- - -- - -  -

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
    cout << "[5 pontos] - " << questions01[c].title << endl;
    cout << "\t A - " << questions01[c].opcaoA << endl;
    cout << "\t B - " << questions01[c].opcaoB << endl;
    cout << "\t C - " << questions01[c].opcaoC << endl;
    cout << "\t D - " << questions01[c].opcaoD << endl;

    printf("\n - - - - - - - - - - - - - - - - - - - - \n");
    printf("R - para pedir ajuda aos universitarios \n");
    printf("- - - - - - - - - - - - - - - - - - - - \n\n");

    printf("JOGADOR-01 >> ");
    cin >> opcao;

    if (opcao == 'R') // Ajuda AOS UNIVERSITARIOS
    {
      if (ajudas >= 1) // se AINDA TEM AJUAS DISPONIVEL
      {
        ajudaUniversitarios();
        ajudas -= 1;

        printf("JOGADOR-01 >> ");
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
    statusmenu();

    // Quando RESPOSTA ERRADA!
    if (res == 0)
    {
      if (vidas >= 1) // se tiver vidas
      {
        continue;
      }
      else
      {
        printf("VOCE JA USOU TODAS VIDAS \n\n");
        system("pause");
        finalizar();
        break;
      }
    }

    if (c == 2)
    {
      finalizar();
      break;
    }
  }
}

int avalia_resposta(char opcao, char correta)
{
  if (opcao == correta)
  {
    printf("✔ - RESPOSTA CERTA \n");
    printf("CONTINUE. \n");
    pontuacao_atual += 5;

    return 1;
  }
  else
  {
    printf("\n");
    printf("RESPOSTA ERRADA! \n");
    printf("%c - E A OPCAO CORRETA. \n\n", correta);
    vidas -= 1;

    return 0;
  }
}

void finalizar()
{
  system("cls");

  printf("========= PARTIDA FINALIZADA ========== \n");
  printf("======================================= \n");
  printf("== VIDAS RESTANTES: %i \n", vidas);
  printf("== AJUDAS RESTANTES: %i \n", ajudas);
  printf("== PONTUACAO %i DE 100 \n", pontuacao_atual);
  printf("- - - - - - - - - - - - - - - - - - - - \n\n");
}

void ajudaUniversitarios(string titulo, char correta, char errada)
{
  system("cls");

  printf("- - - - - - - - - - - - - - - - - - -\n");
  printf(" AJUDA DOS UNIVERSITARIOS \n");
  printf("- - - - - - - - - - - - - - - - - - -\n\n");

  if (correta == 'A' && errada == 'B')
  {
    cout << "A - " << correta << endl;
    cout << "B - " << correta << endl;
  }
  else if (correta == 'B')
  {
    cout << "A - " << correta << endl;
    cout << "B - " << correta << endl;
    cout << "C - " << correta << endl;
  }
  else
  {
    cout << "A - " << correta << endl;
    cout << "B - " << correta << endl;
    cout << "C - " << correta << endl;
  }

  cout << "A - " << correta << endl;
  cout << "B - " << correta << endl;
  cout << "C - " << correta << endl;
}
