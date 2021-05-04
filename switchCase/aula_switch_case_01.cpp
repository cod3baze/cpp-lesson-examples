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
    cout << ">> ";
    cin >> opcao;

    system("cls");

    switch (opcao)
    {
    case 1:
      cout << "\t Voce escolheu Mamao";
      break;

    case 2:
      cout << "\t Voce escolheu Abacaxi";
      break;

    case 3:
      cout << "\t Voce escolheu Laranja";
      break;

    default:
      cout << "\t\t A opcao selecionada nao existe";
      break;
    }

    cout << "\n\n";
    system("pause");
  } while (opcao >= 1 && opcao <= 3);

  return 0;
}
