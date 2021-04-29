/*
  2) Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive).
*/

#include <iostream>

using namespace std;

int main()
{
  int numero;

  cout << "Informe o valor: ";
  cin >> numero;

  for (int c = 0; c <= numero; c++)
  {
    cout << c << endl;
  }

  return 0;
}
