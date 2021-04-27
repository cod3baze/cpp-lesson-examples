#include <iostream>

using namespace std;

int main()
{
  double total = 0.0;
  int menuOpcao, menuInterno, total;

  do
  {
    system("cls");
    cout << "Seja bem vindo a Powe-claculator" << endl;
    cout << "========= Menu Principal =========" << endl;
    cout << "\t 0 - Sair do programa" << endl;
    cout << "\t 1 - Calculador" << endl;

    cout << "menu > ";
    cin >> menuOpcao;
    cout << "\t\t >> " << menuOpcao << " <<" << endl;
    system("pause");

    if (menuOpcao == 1)
    {
      system("cls");

      cout << "\t 0 - Voltar ao menu princpal" << endl;
      cout << "\t 1 - Somar com " << endl;
      cout << "\t 2 - Subtrair de " << endl;
      cout << "\t 3 - Multiplacar com " << endl;
      cout << "\t 4 - Dividir com " << endl;
      cout << "\t 5 - Mostrar total " << endl;
      cout << "Total > " << total << endl;

      cout << "Digite a opcao desejada" << endl;
      cin >> menuInterno;
    }
    else
    {
      cout << "ByeBye";
    }
  } while (menuOpcao != 0);

  return 0;
}
