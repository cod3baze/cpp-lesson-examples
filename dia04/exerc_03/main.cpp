/*
  3) Ler 10 valores, calcular e escrever a média aritmética desses valores lidos.
*/

#include <iostream>

using namespace std;

int main()
{
  int valores, media;

  for (int c = 0; c <= 10; c++)
  {
    cout << c + "* Valor: ";
    cin >> valores;

    valores += valores;
  }
  media = (valores / 10);

  return 0;
}
