#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

using namespace std;

/*
  Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.
*/

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int square = 2, less = 0, row, column, matrix[2][2];

  for (int i = 0; i < square; i++)
  {
    for (int c = 0; c < square; c++)
    {
      printf("Insira o número da %i linha na coluna $i: ", matrix[i][c]);
      scanf("%d", &matrix[i][c]);

      if (matrix[i][c] < less || less == 0)
      {
        less = matrix[i][c];
        row = i + 1;
        column = c + 1;
      }
    }
  }
  printf("Menor número digitado: %i \n", less);
  printf("Posição: Linha %i Coluna %i \n", row, column);

  system("pause");
  return 0;
}
