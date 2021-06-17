#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

/*
2. Leia uma matriz 8 x 8, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.
*/

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int matriz[8][8], maior = 0, linha, coluna;

  for (int i = 0; i < 8; i++)
  {
    printf("- - - - - INSERE OS VALORES - - - - -\n");
    printf("- - - - - - - - - - - - - - - - - - -\n");
    for (int c = 0; c < 8; c++)
    {
      printf("[%d] X [%d] = ", i + 1, c + 1);
      scanf("%d", &matriz[i][c]);

      if (matriz[i][c] > maior || maior == 0)
      {
        maior = matriz[i][c];
        linha = i + 1;
        coluna = c + 1;
      }
    }
    system("cls");
  }

  printf("- - - - - - - - - - - - - - - - - - -\n");
  printf("\nMaior numero digitado: %i \n", maior);
  printf("Posicao: Linha %i Coluna %i \n\n", linha, coluna);

  system("pause");

  return 0;
}
