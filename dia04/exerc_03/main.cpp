/*
  3) Ler 10 valores, calcular e escrever a média aritmética desses valores lidos.
*/

#include <iostream>

using namespace std;

int main()
{
  int valores, valor, media;

  for (int c = 1; c <= 10; c++)
  {
    cout << c;
    cout << "* Valor: ";
    cin >> valor;

    valores += valor;
  }
  media = valores / 10;

  printf("media dos valores digitados: %i", media);

  return 0;
}
