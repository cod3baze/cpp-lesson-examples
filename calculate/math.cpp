#include <stdlib.h>
#include <stdio.h>  // printf
#include <locale.h> // formatação de texto

void soma(float num1, float num2);
void subtracao(float num1, float num2);
void multiplicacao(float num1, float num2);
void divisao(float num1, float num2);
void exibirResultado();
void recebeOpcaoMenu(int opcao, float num1, float num2);
void menu();

float resultado;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  menu();

  return 0;
}

void menu()
{

  int opcao;
  float numero1, numero2;

  do
  {
    system("cls");
    printf("Calculadora avançada do 1SEM de SI");
    printf("\n\t [1] - Soma");
    printf("\n\t [2] - Subtração");
    printf("\n\t [3] - Multiplicação");
    printf("\n\t [4] - Divisão");

    printf("\n\n Seleciona a opcao desejada: ");
    scanf("%d%*c", &opcao);

    if (opcao == 0)
    {
      printf("Programa finalizado!!");
      break;
    }

    printf("\n\n Informe o primeiro valor: ");
    scanf("%f", &numero1);
    printf("Informe o segundo valor: ");
    scanf("%f", &numero2);

    recebeOpcaoMenu(opcao, numero1, numero2);
  } while (opcao != 0);
}

void recebeOpcaoMenu(int opcao, float num1, float num2)
{
  switch (opcao)
  {
  case 1:
    soma(num1, num2);
    break;

  case 2:
    subtracao(num1, num2);
    break;

  case 3:
    multiplicacao(num1, num2);
    break;

  case 4:
    divisao(num1, num2);
    break;

  default:
    printf("Digite uma opcao valida!");
    break;
  }
}

void soma(float num1, float num2)
{
  system("cls");
  resultado = num1 + num2;
  exibirResultado();
}

void subtracao(float num1, float num2)
{
  system("cls");
  resultado = num1 - num2;
}

void multiplicacao(float num1, float num2)
{
  system("cls");
  resultado = num1 * num2;
  exibirResultado();
}

void divisao(float num1, float num2)
{
  system("cls");
  resultado = num1 / num2;
  exibirResultado();
}

void exibirResultado()
{
  printf("O resultado �: %f", resultado);
  system("pause");
}
