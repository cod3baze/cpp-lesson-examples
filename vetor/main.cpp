#include <stdlib.h>
#include <iostream>

using namespace std;

float averageVectorValues(int vector[], int vectorLength)
{
  float sum = 0;
  for (int i = 0; i < vectorLength; i++)
  {
    sum += vector[i];
  }
  return sum / vectorLength;
};

int main()
{
  // char *v[10] = {"a", "b", "c"};
  // v[4] = "A";
  // v[1] = "B";
  // v[2] = "C";
  // v[3] = "D";
  // char cadeiaDeCaracteres[10][20];

  // scanf("%s", &cadeiaDeCaracteres);
  // printf("%s", cadeiaDeCaracteres[0]);

  int vector[] = {0, 1, 2, 3, 4, 5, 6, 7, 8}, sum = 0, lenghtVector = 8;

  cout << "Average: " << averageVectorValues(vector, lenghtVector) << endl;

  return 0;
}
