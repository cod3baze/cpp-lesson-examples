#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string>

using namespace std;

/*
  Crie um programa que receba dois números X e Y, sendo X < Y. Calcule e mostre:
  a soma dos números pares desse intervalo de números, incluindo os números digitados;
  a multiplicação dos números ímpares desse intervalo, incluindo os digitados;
*/

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int num1, num2, totalPares = 0, totalImpares = 1;

  printf("Digite o primero numero: ");
  scanf("%i", &num1);
  printf("Digite um numero maior que %i: ", num1);
  scanf("%i", &num2);

  for (int c = num1; c <= num2; c++)
  {
    if (c % 2 == 0) // números pares
    {
      totalPares += c;
      printf("par - %i \n", c);
      system("pause");
    }
    else
    { // numeros impares
      totalImpares *= c;
      printf("impar - %i \n", c);
      system("pause");
    }
  }

  printf("Soma dos numeros pares: %i \n", totalPares);
  printf("Multiplicacao dos numeros impares: %i \n", totalImpares);
}
