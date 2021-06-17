#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

/*
1. Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas posições pares os valores do primeiro e nas posições impares os valores do segundo.
*/

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int vetor0[10], vetor1[10], calculado[10], i;

  for (i = 0; i < 10; ++i)
  {
    printf("Vetor 01 posicao [%d] = ", i + 1);
    scanf("%d", &vetor0[i]);
  }
  system("cls");

  for (i = 0; i < 10; ++i)
  {
    printf("Vetor 02 posicao [%d] =  ", i + 1);
    scanf("%d", &vetor1[i]);
  }
  for (i = 0; i < 10; ++i)
  {
    calculado[i] = vetor0[i];
    calculado[++i] = vetor1[i];
  }

  system("cls");
  for (i = 0; i < 10; ++i)
    printf("Os valores dos vetores digitados e: [%d]: %d\n", i + 1, calculado[i]);

  system("pause");

  return 0;
}
