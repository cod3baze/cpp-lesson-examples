#include <iostream>

using namespace std;

int main()
{
  int opcao;

  do
  {
    cout << "Escolha uma fruta pelo nome: " << endl;
    cout << "\t (1)...MAmao " << endl;
    cout << "\t (2)...Abacaxi " << endl;
    cout << "\t (3)...Laranja " << endl;
    cin >> opcao;

    system("cls");

    switch (opcao)
    {
    case 1:
      cout << "\t Você escolheu Mamao";
      break;

    case 2:
      cout << "\t Você escolheu Abacaxi";
      break;

    case 3:
      cout << "\t Você escolheu Laranja";
      break;

    default:
      cout << "\t\t A opcao selecionada nao existe";
      break;
    }
  } while (opcao >= 1 && opcao <= 3);

  return 0;
}
