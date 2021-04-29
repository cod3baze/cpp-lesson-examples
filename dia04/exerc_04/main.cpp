/*
  4) Fazer um programa em cpp que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  float preco_produto, inflacao;

  cout << "Informe o preco do produto: ";
  cin >> preco_produto;

  if (preco_produto < 100)
  {
    inflacao = preco_produto + (preco_produto * 0.1);
  }
  else
  {
    inflacao = preco_produto + (preco_produto * 0.2);
  }

  cout << "novo valor: ";
  cout << inflacao << setprecision(1);

  return 0;
}
