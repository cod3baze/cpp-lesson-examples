/*
  Faça um algoritmo que leia dois números e indique se são iguais ou se são diferentes. Mostre o maior e o menor (nesta sequência).

*/

#include <iostream>

using namespace std;

int main()
{
  int num1, num2;

  cout << "Informe o primeiro numero: ";
  cin >> num1;
  cout << "Informe o segundo numero: ";
  cin >> num2;

  if (num1 > num2)
  {
    cout << "O primeiro numero eh maior" << endl;
    cout << num1;
  }
  else if (num2 > num1)
  {
    cout << "O segundo numero eh maior" << endl;
    cout << num2;
  }
  else
  {
    cout << "Ambos os numeros sao identicos" << endl;
  }

  return 0;
}
