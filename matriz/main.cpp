#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
  int matriz[20][20];

  for (int i = 0; i < 20; i++)
  {
    for (int c = 0; c < 20; c++)
    {
      matriz[i][c] = i + c;
      cout << matriz[i][c] << endl;
    }
  }
  cout << matriz[0][0] << endl;

  return 0;
}
