#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

/*
  2.  Escreva um programa que armazene um vetor de até 30 inteiros. O programa deve fornecer as seguintes operações:

  a. ✔ Inserir um elemento no final do vetor
  b. ✔ Inserir um elemento em uma dada posição
  c. ✔ Remover um elemento de uma posição indicada
  d. ✔ Remover todos elementos iguais a um valor indicado
*/

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int vetor[30] = {}, elemento, valor;

  printf("Insere um elemento no final do vetor: ");
  scanf("%i", &elemento);

  if (elemento % 2 == 0)
  {
    vetor[30] = elemento;
  }
  else
  {
    printf("Apenas insere um elemento do tipo inteiro");
  }

  printf("Qual posição quer inserir o proximo elemento? 0 á 29: ");
  scanf("%i", &elemento);
  printf("Digite o valor a ser inserido: ");
  scanf("%i", &vetor[elemento]);

  printf("Qual posição quer remover o elemento? 0 á 29: ");
  scanf("%i", &elemento);
  vetor[elemento] = 0;
  scanf("elemento removido :D");

  printf("valores a serem removidos? : ");
  scanf("%i", &elemento);
  for (int c = 0; c < 30; c++)
  {
    if (vetor[c] == elemento)
    {
      vetor[c] = 0;
    }
  }

  return 0;
}
