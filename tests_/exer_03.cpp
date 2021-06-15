#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

/*
  3. Escrever um algoritmo que leia uma matriz de valores inteiros 6 por 6 e um valor inteiro qualquer, posteriormente multiplicar a matriz pelo valor lido e colocar o resultado na própria matriz.
*/

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, c, matriz[6][6] = {}, multiplicador;

  printf("Multiplicador: ");
  scanf("%i", &multiplicador);

  for (i = 0; i < 6; i++)
  {
    for (c = 0; c < 6; c++)
    {
      printf("- - - - PREENCHA A MATRIZ - - - - \n");
      printf("Elemento [%d] x [%d] = ", i, c);
      scanf("%d", &matriz[i][c]);
      system("cls");
    }
  }

  for (i = 0; i < 6; i++)
    for (c = 0; c < 6; c++)
      matriz[i][c] = matriz[i][c] * multiplicador;

  printf("- - - - - - - - - - - - - - - - - - - - - -");
  printf("\n- - - Valores Multiplicados por %i - - -\n", multiplicador);

  for (i = 0; i < 6; i++)
  {
    for (c = 0; c < 3; c++)
      printf("%d ", matriz[i][c]);

    printf("\n");
  }
  printf("- - - - - - - - - - - - - - - - - - - - - -\n");

  system("pause");
  return 0;
}
