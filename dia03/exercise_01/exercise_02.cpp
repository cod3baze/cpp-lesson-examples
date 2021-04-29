#include <iostream>

using namespace std;

int main()
{
  int numero;

  cout << "Informe o valor que deseja comprar com o numero 20: " << endl;
  cin >> numero;

  if (numero == 20)
  {
    cout << "O numero digitado é igual a 20" << endl;
  }
  else if (numero > 20)
  {
    cout << "O numero digitado é maior que 20" << endl;
  }
  else
  {
    cout << "O numero digitado é menor que 20" << endl;
  }

  return 0;
}
