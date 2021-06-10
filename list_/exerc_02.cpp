#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

using namespace std;

/*
  2)Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo este número deve ser sempre ímpar.
                      1 2 3 4 5 6 7 8 9
                        2 3 4 5 6 7 8
                          3 4 5 6 7
                            4 5 6
                              5
*/

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int max, step;
  printf("Digite um numero impar: ");
  scanf("%d", &max);

  if (max % 2 == 0)
  {
    printf("Numero invalido.\n");
    system("exit");
  }

  step = (max - 1) / 2;
  for (int i = 0; i <= step; i++)
  {
    for (int j = i + 1; j <= max - i; j++)
    {
      printf(" %d", j);
    }
    printf("\n ");
  }

  system("pause");
  return 0;
}
