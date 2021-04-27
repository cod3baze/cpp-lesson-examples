#include <iostream>

using namespace std;

int main()
{
  double x, y;

  cout << "Bem vindo a mini calculadora Elias" << endl;
  cout << "Informe o valor de X:";
  cin >> x;
  cout << "informe o valor de Y:";
  cin >> y;

  cout << "A soma eh: " << x + y << endl;
  cout << "A subtracao eh: " << x - y << endl;
  cout << "O produto eh: " << x * y << endl;
  cout << "A divisao eh: " << x / y << endl;

  system("pause");
  return 0;
}
