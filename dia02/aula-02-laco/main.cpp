#include <iostream>

using namespace std;

int main()
{
  double total = 0.0, valor = 0.0;
  int menuOpcao, menuInterno = 1;

  do
  {
    system("cls");
    cout << "Seja bem vindo a Power-claculator" << endl;
    cout << "========= Menu Principal =========" << endl;
    cout << "\t 0 - Sair do programa" << endl;
    cout << "\t 1 - Calculador" << endl;

    cout << "menu > ";
    cin >> menuOpcao;
    cout << "\t\t >> " << menuOpcao << " <<" << endl;
    system("pause");

    if (menuOpcao == 1)
    {
      total = 0;
      while (menuInterno != 0)
      {
        system("cls");

        cout << "Total > " << total << endl;

        cout << "\n\n \t 0 - Voltar ao menu princpal" << endl;
        cout << "\t 1 - Somar" << endl;
        cout << "\t 2 - Subtrair" << endl;
        cout << "\t 3 - Multiplacar" << endl;
        cout << "\t 4 - Dividir" << endl;
        cout << "\t 5 - Mostrar" << endl;

        cout << "\n Digite a opcao desejada: ";
        cin >> menuInterno;

        if (menuInterno >= 1 && menuInterno <= 4)
        {
          system("cls");
          cout << "Informe o valor: ";
          cin >> valor;

          if (menuInterno == 1)
          {
            total += valor;
          }
          else if (menuInterno == 2)
          {
            total -= valor;
          }
          else if (menuInterno == 3)
          {
            total *= valor;
          }
          else
          {
            total /= valor;
          }
        }

        if (menuInterno == 5)
        {
          cout << "\n Total > " << total << endl;
          system("pause");
        }
      }
    }
    else
    {
      cout << "ByeBye";
    }
  } while (menuOpcao != 0);

  return 0;
}
