#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <windows.h>

using namespace std;

void regras();
void statusMenu();
void menuPrincipal();
int avalia_resposta(char opcao, char correta, int pontuacao);
void iniciar();
void finalizar();
void recomecarJogo(int recomecar);
void ajudaUniversitarios(string titulo, string errada, string correta, string opcaoC, char opcaoCorreta, int pontuacao);
void textColor (int words, int backgroud);

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
  int pontuacao;

  Question(
      string tit,
      char ans,
      string a, string b, string c, int pont)
  {
    title = tit;
    answer = ans;
    opcaoA = a;
    opcaoB = b;
    opcaoC = c;
    pontuacao = pont;
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
  printf("O jogo cont�m 30 perguntas de conhecimentos gerais. \n");
  printf("Sendo elas 10 f�ceis, 10 intermedi�rias e 10 dif�ceis! \n");
  printf("Ao longo do jogo voc� ter� 3 vidas e 2 ajudas! \n");
  printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
}

void statusMenu()
{
  printf("========= GAME ========== \n");
  printf("========================= \n");
  printf("== Vidas restantes: %i \n", vidas);
  printf("== Ajudas restantes: %i \n", ajudas);
  printf("== Pontua��o atual: %i \n", pontuacao_atual);
  printf("- - - - - - - - - - - - - \n\n");
}

void menuPrincipal()
{
  int status;

  do
  {
    printf("[0] - Para sair do jogo \n");
    if (status != 0)
    {
      printf("[1] - Para recome�ar o jogo \n\n");
    }
    else if (status == 0)
    {
      printf("[1] - Para come�ar o jogo \n\n");
    }

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

Question questions01[30] = {
    Question("Existe mais de 1 polo norte. voc� sabe quantos s�o?", 'A', "Pelo menos tres Polos Nortes", "Dois polo norte", "Nenhuma das opcoes", 5),

    Question("Quais dessas regi�es n�o faz parte do territ�rio Ant�rtico?", 'C', "Canad�", "Groenl�ndia", "China", 5),

    Question("Qual a velocidade da Luz?", 'A', "300.000 Km/s", "340 m/s", "30.000 km/h", 5),

    Question("O polo norte se banha em qual oceano?", 'B', "Oceano Atl�ntico", "Oceano Glacial �rtico", "Oceano Pac�fico", 5),

    Question("Normalmente, quantos litros de sangue uma pessoa t�m?", 'B', "Entre e 2 e 4 litros", "Entre 4 e 6 litros", "Entre 7 e 9 litros", 5),

    Question("Quais desses animais n�o � poss�el ver no Polo Norte?", 'B', "Baleia Jubarte", "Pinguim-imperador", "Urso-polar", 5),

    Question("O que a palavra LEGEND significa em portugu�s?", 'C', "Legenda", "Conto", "Lenda", 5),

    Question("Qual � mais frio, o Polo norte ou o Polo sul?", 'A', "Polo Sul", "Polo Norte", "Ambos", 5),

    Question("Qual � o recorde de temperatura mais baixa j� alcan�da no Alasca?", 'A', "62�C Negativos", "53�C Negativos", "43�C Negativos", 5),

    Question("Qual � a montanha mais alta dos Estados Unidos?", 'B', "Chamberlin", "Denali", "Hunter", 5),

    Question("Qual o metal cujo s�mbolo qu�mico � o Au?", 'A', "Ouro", "Prata", "Cobre", 10),

    Question("Qual � o maior lago do Alasca?", 'B', "Clark", "Iliamna", "Abyss", 10),

    Question("Qual � a capital do estado do Alasca?", 'C', "Anchorage", "Fairbanks", "Juneau", 10),

    Question("Qual � o maior continente em extens�o?", 'C', "�frica", "Europa", "�sia", 10),

    Question("Quantos tipos de Salm�o podem ser encontrados no Alasca?", 'A', "5", "4", "3", 10),

    Question("Jim Morrison era vocalista de que grupo?", 'B', " The Police", "The Doors", "Pink Floyd", 10),

    Question("Quem foi o criador da trag�dia grega?", 'C', "Homero", "Eur�pedes", "�squilo", 10),

    Question("Quantos graus s�o neces�rios para que dois �ngulos sejam complementares?", 'A', "90�", "40�", "75�", 10),

    Question("Quem pintou o teto da capela sistina?", 'B', "Leonardo da Vinci", "Michelangelo", "Sandro Botticelli", 10),

    Question("Em que cidade ocorreu a Eco-92, a Confer�ncia das Na��es Unidas sobre ambiente e desenvolvimento?", 'C', "Buenos Aires", "Montevid�u", "Rio de Janeiro", 10),

    Question("Qual o menor e maior pa�s do mundo?", 'A', "Vaticano e R�ssia", "Nauru e China", "M�naco e Canad�", 15),

    Question("Qual dessas op��es cont�m apenas constru��es famosas que ficam nos Estados Unidos?", 'A', "Est�tua da Liberdade, Golden Gate Bridge e Empire State Building", "Est�tua da liberdade, Big Bem e Burj khalifa", "Lincoln Memorial, Sydney Opera e Grand Canyon", 15),

    Question("Qual desses pa�ses � transcontinental?", 'B', "China", "R�ssia", "Istambul", 15),

    Question("Pessoas com que tipo sangu�neo s�o consideradas doadores universais?", 'C', "Tipo A", "Tipo B", "Tipo O", 15),

    Question("Quanto tempo a luz do sol demora para chegar na terra?", 'A', "8 minutos", "12 minutos", "8 horas", 15),

    Question("Qual a montanha mais alta do Brasil?", 'B', "Pico do Paran�", "Pico da Neblina", "Pico da Bandeira", 15),

    Question("Onde foi inventado o chuveiro el�trico?", 'C', "Fran�a", "Inglaterra", "Brasil", 15),

    Question("Qual � o nome do macho da cabra?", 'B', "Cabro", "Bode", "Bezerro", 15),

    Question("Quais s�o as cores da bandeira da China?", 'A', "Vermelho e Amarelo", "Vermelho e Branco", "Vermelha e Azul", 15),

    Question("Quantas patas uma formiga possui?", 'B', "4 patas", "6 patas", "8 patas", 15)};

void iniciar()
{
  char opcao;

  for (int c = 0; c < 30; c++)
  {
    printf("Quest�o %i \n\n", c + 1);
    cout << questions01[c].pontuacao << " pontos - " << questions01[c].title << endl;
    cout << "\t A - " << questions01[c].opcaoA << endl;
    cout << "\t B - " << questions01[c].opcaoB << endl;
    cout << "\t C - " << questions01[c].opcaoC << endl;

    printf("\n - - - - - - - - - - -- -  -- - - - -");
    printf("\n R - PARA PEDIR AJUDA AOS UNIVERSIT�RIOS");
    printf("\n - - - - - - - - - - -- -  -- - - - -");

    printf("\n\n JOGADOR-01 >> ");
    cin >> opcao;

    if (opcao == 'R' || opcao == 'r')
    {
      if (ajudas >= 1)
      {
        printf("\n AJUDA UNIVERSIT�RIOS!!!");
        ajudas -= 1;
        ajudaUniversitarios(questions01[c].title, questions01[c].opcaoA, questions01[c].opcaoB, questions01[c].opcaoC, questions01[c].answer, questions01[c].pontuacao);

        printf("\n\n JOGADOR-01 >> ");
        cin >> opcao;
      }
      else
      {
        printf("\n VOC� N�O TEM MAIS AJUDAS DISPON�VEIS");

        printf("\n\n JOGADOR-01 >> ");
        cin >> opcao;
      }
    }
    if (opcao == 'F' || opcao == 'f')
    {
      break;
    }

    int res = avalia_resposta(opcao, questions01[c].answer, questions01[c].pontuacao);
    system("pause");
    system("cls");
    system("color 0F");
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
        break;
      }
    }
  }

  finalizar();
};

int avalia_resposta(char opcao, char correta, int pontuacao)
{
  if (toupper(opcao) == toupper(correta))
  {
  	textColor(2, 0);
    printf("\n Resposta certa \n");
    pontuacao_atual += pontuacao;
    textColor(15, 0);

    return 1;
  }
  else
  {
  	textColor(4, 0);
    printf("\n Resposta errada! \n");
    printf("\n RESPOSTA CORRETA - %c \n", correta);
    vidas--;
    textColor(15, 0);

    return 0;
  }
}

typedef enum{
	BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY, DARKGRAY,
	LIGHTBLUE, LIGHTGREEN, LIGHTCYAN, LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE
} COLORS;

static int __BACKGROUND = 1;
static int __FOREGROUND = 7;

void textColor (int words, int backgroud)
{
    __FOREGROUND = words;
    __BACKGROUND = backgroud;
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
    words + (__BACKGROUND << 4));
}

void finalizar()
{
  system("cls");
  printf("========= PARTIDA FINALIZADA ========== \n");
  printf("- - - - - PONTOS %i DE 300 - - - - - - - -\n\n", pontuacao_atual);
  printf("- - - - - - - - - - - - - - - - - - - - \n\n");
  system("pause");
  system("cls");

  statusMenu();

  vidas = 3,
  ajudas = 2,
  pontuacao_atual = 0;
};

void ajudaUniversitarios(string titulo, string errada, string correta, string opcaoC, char opcaoCorreta, int pontuacao)
{
  system("cls");

  printf("\n - - - - - - - - - - -- -  -- - - - -");
  printf("\n  AJUDA DOS UNIVERSIT�RIOS");
  printf("\n - - - - - - - - - - -- -  -- - - - -");

  if (opcaoCorreta == 'A')
  {
    cout << "\n\n"
         << pontuacao << " pontos - " << titulo << endl;
    cout << "\t A - " << correta << endl;
    cout << "\t B - " << errada << endl;
  }
  else if (opcaoCorreta == 'B')
  {
    cout << "\n\n"
         << pontuacao << " pontos - " << titulo << endl;
    cout << "\t A - " << errada << endl;
    cout << "\t B - " << correta << endl;
  }
  else
  {
    cout << "\n\n"
         << pontuacao << " pontos - " << titulo << endl;
    cout << "\t B - " << errada << endl;
    cout << "\t C - " << opcaoC << endl;
  }
}
