#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void soma();
void subtracao();
void multiplicacao();
void menu();

int main()
{
  setlocale(LC_ALL, "Portuguese");
  menu();

  return 0;
}

void menu()
{

  int opcao;

  do
  {
    printf("Seleciona a opcao desejada");
    cout << "Seleciona" << endl;
    cout << "Seleciona" << endl;
    cout << "Seleciona" << endl;
    cout << "Seleciona" << endl;

    switch (opcao)
    {
    case 1:
      soma();
      break;

    case 2:
      subtracao();
      break;

    case 3:
      multiplicacao();
      break;

    default:
      break;
    }
  } while (opcao != 0);
}

void soma()
{
  system("cls");
  int soma = 2 + 10;
  printf("Soma: %d", soma);
  system("pause");
}
