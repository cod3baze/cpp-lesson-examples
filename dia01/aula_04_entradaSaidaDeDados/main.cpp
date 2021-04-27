#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int opcao = 0;

  cout << "--------------------------------------------" << endl;
  cout << "Seja bem vindo ao meu primeiro menu em CPP: " << endl;
  cout << "============== Menu principal ==============" << endl;
  cout << "\t 0 - sair do programa" << endl;
  cout << "\t 1 - Exibir meu curso" << endl;
  cout << "\t 2 - Exibir minha universidade" << endl;
  cout << "menu > " << endl;

  // console input: cin
  cin >> opcao;

  cout << "\t\t > " << opcao << " << " << endl;

  return 0;
}
