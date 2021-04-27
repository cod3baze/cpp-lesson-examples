#include <iostream>

using namespace std;

int main()
{

  double total = 0;
  int menuOpcao = 1, menuInterno = 0;

  //laco de repeticao
  //enquanto (VERDADE)
  // == (igual a)
  // != (diferente de)
  // > >= < <=
  while (menuOpcao != 0)
  {
    //Limpar conteudo terminal
    system("cls");
    cout << "Seja bem-vindo a Power-calculator" << endl;
    cout << "==========Menu Principal=========" << endl;
    cout << "\t0 - Sair do programa" << endl;
    cout << "\t1 - Calculadora" << endl;
    cout << "menu> ";
    cin >> menuOpcao;
    cout << "\t\t>> " << menuOpcao << " <<" << endl;
    system("pause");

    if (menuOpcao == 1)
    {
      system("cls");
      cout << "\t0 - Voltar ao menu principal" << endl;
      cout << "\t1 - Somar com " << endl;
      cout << "\t2 - Subtrai de " << endl;
      cout << "\t3 - Multiplicar com " << endl;
      cout << "\t4 - Dividir com " << endl;
      cout << "\t5 - Mostrar Total " << endl;
      cout << "Total> " << total << endl;
      cout << "Digita a opcao desejada" << endl;
      cin >> menuInterno;
    }
    else
    {
      cout << "ByeBye";
    }
  }

  return 0;
}
