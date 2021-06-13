#include <iostream>

using namespace std;
int aluno[1], j, nota[10], Aluno2[1], Aluno3[1], nota2[10], nota3[10];
char resposta[10];

void aluno2();
void aluno3();

int main()
{

  for (int i = 0; i < 1; i++)
  {

    cout << "Aluno  " << i + 1 << " digite sua matricula: ";
    cin >> aluno[i];

    cout << "\n";
    cout << " -- Digite a resposta de cada questao -- " << endl;

    for (j = 0; j < 10; j++)
    {

      cout << endl;
      cout << "Questao " << j + 1 << endl;
      cout << "A" << endl;
      cout << "B " << endl;
      cout << "C " << endl;
      cout << "D " << endl;
      cout << "E " << endl;

      cout << endl;
      cout << "Resposta >> ";
      cin >> resposta[j];

      if (resposta[0] == 'C' || resposta[0] == 'c')
      {
        nota[0] = 1;
      }
      else if (resposta[0] != 'C' && resposta[0] != 'c')
      {
        nota[0] = 0;
      }

      if (resposta[1] == 'A' || resposta[1] == 'a')
      {
        nota[1] = 1;
      }
      else if (resposta[1] != 'A' && resposta[1] != 'a')
      {
        nota[1] = 0;
      }

      if (resposta[2] == 'B' || resposta[2] == 'b')
      {
        nota[2] = 1;
      }
      else if (resposta[2] != 'B' && 'b')
      {
        nota[2] = 0;
      }

      if (resposta[3] == 'A' || resposta[3] == 'a')
      {
        nota[3] = 1;
      }
      else if (resposta[3] != 'A' && resposta[3] != 'a')
      {
        nota[3] = 0;
      }

      if (resposta[4] == 'd' || resposta[4] == 'D')
      {
        nota[4] = 1;
      }
      else if (resposta[4] != 'D' && 'd')
      {
        nota[4] = 0;
      }

      if (resposta[5] == 'E' || resposta[5] == 'e')
      {
        nota[5] = 1;
      }
      else if (resposta[5] != 'E' && 'e')
      {
        nota[5] = 0;
      }

      if (resposta[6] == 'B' || resposta[6] == 'b')
      {
        nota[6] = 1;
      }
      else if (resposta[6] != 'B' && resposta[6] != 'b')
      {
        nota[6] = 0;
      }

      if (resposta[7] == 'A' || resposta[7] == 'a')
      {
        nota[7] = 1;
      }
      else if (resposta[7] != 'A' && resposta[7] != 'a')
      {
        nota[7] = 0;
      }

      if (resposta[8] == 'C' || resposta[9] == 'c')
      {
        nota[8] = 1;
      }
      else if (resposta[8] != 'C' && resposta[8] != 'c')
      {
        nota[8] = 0;
      }

      if (resposta[9] == 'C' || resposta[9] == 'c')
      {
        nota[9] = 1;
      }
      else if (resposta[9] != 'C' && resposta[9] != 'c')
      {
        nota[9] = 0;
      }
    }
  }

  cout << endl;

  cout << " O aluno " << aluno[0] << " resultou em nota " << nota[0] + nota[1] + nota[2] + nota[3] + nota[4] + nota[5] + nota[6] + nota[7] + nota[8] + nota[9];
  ;

  system("pause");

  return 0;
}

// void aluno2()
// {

//   for (int i = 0; i < 1; i++)
//   {

//     cout << "Aluno  " << i + 2 << " digite sua matricula " << endl;
//     cin >> Aluno2[i];

//     cout << "\n";
//     cout << "Digite a resposta de cada questao " << endl;
//     for (j = 0; j < 10; j++)
//     {

//       cout << endl;
//       cout << "Questao " << j + 1 << endl;
//       cout << "A" << endl;
//       cout << "B " << endl;
//       cout << "C " << endl;
//       cout << "D " << endl;
//       cout << "E " << endl;

//       cin >> resposta[j];
//       if (resposta[0] == "C" || resposta[0] == "C")
//       {
//         nota2[0] = 1;
//       }
//       else if (resposta[0] != "C" && "c")
//       {

//         nota2[0] = 0;
//       }
//       if (resposta[1] == "A" || resposta[1] == "a")
//       {
//         nota2[1] = 1;
//       }
//       else if (resposta[1] != "A" && "a")
//       {

//         nota2[1] = 0;
//       }
//       if (resposta[2] == "B" || resposta[2] == "b")
//       {
//         nota2[2] = 1;
//       }
//       else if (resposta[2] != "B" && "b")
//       {

//         nota2[2] = 0;
//       }
//       if (resposta[3] == "A" || resposta[3] == "a")
//       {
//         nota2[3] = 1;
//       }
//       else if (resposta[3] != "A" && "a")
//       {

//         nota2[3] = 0;
//       }
//       if (resposta[4] == "d" || resposta[4] == "D")
//       {
//         nota2[4] = 1;
//       }
//       else if (resposta[4] != "D" && "d")
//       {

//         nota2[4] = 0;
//       }
//       if (resposta[5] == "E" || resposta[5] == "e")
//       {
//         nota2[5] = 1;
//       }
//       else if (resposta[5] != "E" && "e")
//       {

//         nota2[5] = 0;
//       }
//       if (resposta[6] == "B" || resposta[6] == "b")
//       {
//         nota2[6] = 1;
//       }
//       else if (resposta[6] != "B" && "b")
//       {

//         nota2[6] = 0;
//       }
//       if (resposta[7] == "A" || resposta[7] == "a")
//       {
//         nota2[7] = 1;
//       }
//       else if (resposta[7] != "A" && "a")
//       {

//         nota2[7] = 0;
//       }
//       if (resposta[8] == "C" || resposta[9] == "c")
//       {
//         nota2[8] = 1;
//       }
//       else if (resposta[8] != "C" && "c")
//       {

//         nota2[8] = 0;
//       }
//       if (resposta[9] == "C" || resposta[9] == "c")
//       {
//         nota2[9] = 1;
//       }
//       else if (resposta[9] != "C" && "c")
//       {

//         nota2[9] = 0;
//       }
//     }
//   }
//   aluno3();
// }

// void aluno3()
// {

//   for (int i = 0; i < 1; i++)
//   {

//     cout << "Aluno  " << i + 3 << " digite sua matricula " << endl;
//     cin >> Aluno3[i];

//     cout << "\n";
//     cout << "Digite a resposta de cada questao " << endl;
//     for (j = 0; j < 10; j++)
//     {

//       cout << endl;
//       cout << "Questao " << j + 1 << endl;
//       cout << "A" << endl;
//       cout << "B " << endl;
//       cout << "C " << endl;
//       cout << "D " << endl;
//       cout << "E " << endl;

//       cin >> resposta[j];
//       if (resposta[0] == "C" || resposta[0] == "C")
//       {
//         nota3[0] = 1;
//       }
//       else if (resposta[0] != "C" && "c")
//       {

//         nota3[0] = 0;
//       }
//       if (resposta[1] == "A" || resposta[1] == "a")
//       {
//         nota3[1] = 1;
//       }
//       else if (resposta[1] != "A" && "a")
//       {

//         nota3[1] = 0;
//       }
//       if (resposta[2] == "B" || resposta[2] == "b")
//       {
//         nota3[2] = 1;
//       }
//       else if (resposta[2] != "B" && "b")
//       {

//         nota3[2] = 0;
//       }
//       if (resposta[3] == "A" || resposta[3] == "a")
//       {
//         nota3[3] = 1;
//       }
//       else if (resposta[3] != "A" && "a")
//       {

//         nota3[3] = 0;
//       }
//       if (resposta[4] == "d" || resposta[4] == "D")
//       {
//         nota3[4] = 1;
//       }
//       else if (resposta[4] != "D" && "d")
//       {

//         nota3[4] = 0;
//       }
//       if (resposta[5] == "E" || resposta[5] == "e")
//       {
//         nota3[5] = 1;
//       }
//       else if (resposta[5] != "E" && "e")
//       {

//         nota3[5] = 0;
//       }
//       if (resposta[6] == "B" || resposta[6] == "b")
//       {
//         nota3[6] = 1;
//       }
//       else if (resposta[6] != "B" && "b")
//       {

//         nota3[6] = 0;
//       }
//       if (resposta[7] == "A" || resposta[7] == "a")
//       {
//         nota3[7] = 1;
//       }
//       else if (resposta[7] != "A" && "a")
//       {

//         nota3[7] = 0;
//       }
//       if (resposta[8] == "C" || resposta[9] == "c")
//       {
//         nota3[8] = 1;
//       }
//       else if (resposta[8] != "C" && "c")
//       {

//         nota3[8] = 0;
//       }
//       if (resposta[9] == "C" || resposta[9] == "c")
//       {
//         nota3[9] = 1;
//       }
//       else if (resposta[9] != "C" && "c")
//       {

//         nota3[9] = 0;
//       }
//     }
//   }
//   cout << " O aluno " << aluno[0] << " resultou em nota " << nota[0] + nota[1] + nota[2] + nota[3] + nota[4] + nota[5] + nota[6] + nota[7] + nota[8] + nota[9];
//   ;
//   cout << " O aluno " << Aluno2[0] << " resultou em nota " << nota2[0] + nota[1] + nota[2] + nota[3] + nota[4] + nota[5] + nota[6] + nota[7] + nota[8] + nota[9];
//   cout << " O aluno " << Aluno3[0] << " resultou em nota " << nota3[0] + nota3[1] + nota3[2] + nota3[3] + nota3[4] + nota3[5] + nota3[6] + nota3[7] + nota3[8] + nota3[9];
//   exit(0);
// }
