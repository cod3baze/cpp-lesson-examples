#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

using namespace std;

/*
  28) Faça um programa para corrigir uma prova com 10 questões de múltipla escolha ( ´ a, b, c, d ou e), em uma turma com 3 alunos. Cada questão vale 1 ponto. Leia o gabarito, e ˜ para cada aluno leia sua matricula (numero inteiro) e suas respostas. Calcule e escreva: Para cada aluno, escreva sua matrícula, suas respostas, e sua nota. O percentual de aprovação, assumindo media 7.0.
*/

void user_average(char *gabarito);

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int aluno01, total01 = 0;
  char gabarito[10] = {'A', 'B', 'B', 'D', 'E', 'A', 'C', 'D', 'E', 'A'}, resposta;

  user_average(gabarito);
  user_average(gabarito);
  user_average(gabarito);
}

void user_average(char *gabarito)
{
  char resposta;
  int total, aluno;

  printf("Insere a sua matricula: ");
  scanf("%d", &aluno);

  for (int i = 0; i < 10; i++)
  {
    cout << endl;
    printf("\n--- Qual o resultado da questao %d? ---\n\n", i + 1);
    printf("ALUNO %i >> ", aluno);
    cin >> resposta;

    if (toupper(resposta) == gabarito[i])
    {
      printf("\nESSA RESPOSTA ESTA CERTA\n\n");
      total += 1;
      system("pause");
    }
    else
    {
      printf("\nESSA RESPOSTA ESTA ERRADA\n\n");
      system("pause");
    }
    system("cls");
  }

  printf("- - - - - RESULTADO - - - - -\n");
  printf("ALUNO: %d \n", aluno);
  printf("Total de pontos: %d \n\n", total);
}
