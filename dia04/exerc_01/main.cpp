/*
  1) Crie um algoritmo que receba 3 números e informe qual o maior entre eles.
*/

#include <iostream>

using namespace std;

int main()
{
  int num1, num2, num3;

  cout << "Informe o primeiro valor: ";
  cin >> num1;
  cout << "Informe o segundo valor: ";
  cin >> num2;
  cout << "Informe o terfeiro valor: ";
  cin >> num3;

  if (num1 > num2 && num1 > num3)
  {
    cout << "O primeiro valor é maior" << endl;
    cout << num1 << endl;
  }
  else if (num2 > num1 && num2 >= num3)
  {
    cout << "O segundo valor é maior" << endl;
    cout << num2 << endl;
  }
  else if (num3 > num1 && num3 > num2)
  {
    cout << "O terceiro valor é maior" << endl;
    cout << num3 << endl;
  }
  else
  {
    cout << "Ambos os valores sao iguais" << endl;
    cout << num1 << endl;
  }

  return 0;
}
