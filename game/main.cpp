#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

using namespace std;

void regras();
void statusMenu();
void menuPrincipal();
int avalia_resposta(char opcao, char correta, int pontuacao);
void iniciar();
void finalizar();

void recomecarJogo(int recomecar);

void ajudaUniversitarios(string titulo, string errada, string correta, string opcaoC, char opcaoCorreta, int pontuacao);

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
    if (status != 0)
    {
      printf("[1] - para recomeçar o jogo \n\n");
    }
    else if (status == 0)
    {
      printf("[1] - para começar o jogo \n\n");
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
    Question("Existe mais de 1 polo norte. voçê sabe quantos são?", 'A', "Pelo menos tres Polos Nortes", "Dois polo norte", "Nenhuma das opcoes", 5),

    Question("Quais dessas regiões não faz parte do territótio Ártico?", 'C', "Canada", "Groenlandia", "China", 5),

    Question("O polo norte se banha em qual oceano?", 'B', "Oceano Atlantico", "Oceano Glacial Artico", "Oceano Pacifico", 5),

    Question("Quais desses animais NÃO é possível ver no Polo Norte?", 'B', "Baleia Jubarte", "Pinguim-imperador", "Urso-polar", 5),

    Question("Qual é mais frio, o Polo norte ou o Polo sul?", 'A', "Polo Sul", "Polo Norte", "Ambos", 5),

    Question("Qual é o recorde de temperatura mais baixa já alcançada no Alasca?", 'A', "62*C Negativos", "53*C Negativos", "43*C Negativos", 5),

    Question("Entre os picos do Alasca, está a montanha mais alta dos Estados Unidos. Seu nome é:", 'B', "Chamberlin", "Denali", "Hunter", 5),

    Question("Qual é o maior lago do Alasca?", 'B', "Clark", "Iliamna", "Abyss", 5),

    Question("Qual é a capital do estado do Alasca?", 'C', "Anchorage", "Fairbanks", "Juneau", 5),

    Question("Quantos tipos de Salmão podem ser encontrados no Alasca?", 'A', "5", "4", "3", 5),

    Question("Jim Morrison era vocalista de que grupo?", 'B', " The Police", "The Doors", "Pink Floyd", 10),

    Question("Quem foi o criador da tragédia grega?", 'C', "Homero", "Eurípedes", "Ésquilo", 10),

    Question("Quantos graus são necessários para que dois ângulos sejam complementares?", 'A', "90*", "40*", "75*", 10),

    Question("Quem pintou o teto da capela sistina?", 'B', "Leonardo da Vinci", "Michelangelo", "Sandro Botticelli", 10),

    Question("Em que cidade ocorreu a Eco-92, a Conferência das Nações Unidas sobre ambiente e desenvolvimento?", 'C', "Buenos Aires", "Montevidéu", "Rio de Janeiro", 10),

    Question("Qual o menor e maior país do mundo?", 'A', "Vaticano e Rússia", "Nauru e China", "Mônaco e Canadá", 5),

    Question("Normalmente, quantos litros de sangue uma pessoa têm?", 'B', "Entre e 2 e 4 litros", "Entre 4 e 6 litros", "Entre 7 e 9 litros", 5),

    Question("Qual a velocidade da Luz?", 'A', "300.000 Km/s", "340 m/s", "30.000 km/h", 5),

    Question("Qual dessas opções contêm apenas construções famosas que ficam nos Estados Unidos?", 'A', "Estátua da Liberdade, Golden Gate Bridge e Empire State Building", "Estátua da liberdade, Big Bem e Burj khalifa", "Lincoln Memorial, Sydney Opera e Grand Canyon", 5),

    Question("Qual desses países é transcontinental?", 'B', "China", "Rússia", "Istambul", 5),

    Question("Pessoas com que tipo sanguíneo são consideradas doadores universais?", 'C', "Tipo A", "Tipo B", "Tipo O", 5),

    Question("O que a palavra “Legend” significa em português?", 'C', "Legenda", "Conto", "Lenda", 5),

    Question("Quanto tempo a luz do sol demora para chegar na terra?", 'A', "8 minutos", "12 minutos", "8 horas", 5),

    Question("Qual a montanha mais alta do Brasil?", 'B', "Pico do Paraná", "Pico da Neblina", "Pico da Bandeira", 5),

    Question("Qual o metal cujo símbolo químico é o Au?", 'A', "Ouro", "Prata", "Cobre", 5),

    Question("Onde foi inventado o chuveiro elétrico?", 'C', "França", "Inglaterra", "Brasil", 5),

    Question("Qual é o nome do macho da cabra?", 'B', "Cabro", "Bode", "Bezerro", 5),

    Question("Quais são as cores da bandeira da China?", 'A', "Vermelho e Amarelo", "Vermelho e Branco", "Vermelha e Azul", 5),

    Question("Qual é o maior continente em extensão?", 'C', "África", "Europa", "Ásia", 5),

    Question("Quantas patas uma formiga possui?", 'B', "4 patas", "6 patas", "8 patas", 5)};

void iniciar()
{
  char opcao;

  for (int c = 0; c < 3; c++)
  {
    printf("Questao %i \n\n", c + 1);
    cout << questions01[c].pontuacao << " pontos - " << questions01[c].title << endl;
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
        ajudaUniversitarios(questions01[c].title, questions01[c].opcaoA, questions01[c].opcaoB, questions01[c].opcaoC, questions01[c].answer, questions01[c].pontuacao);

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

    int res = avalia_resposta(opcao, questions01[c].answer, questions01[c].pontuacao);
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
        break;
      }
    }
  }

  finalizar();
};

/*
  * REMOVER CONSUANTE O NIVEL
*/
int avalia_resposta(char opcao, char correta, int pontuacao)
{
  if (opcao == correta)
  {
    printf("\n Resposta certa \n");
    pontuacao_atual += pontuacao;

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
  printf("\n  AJUDA DOS UNIVERSITARIOS");
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
