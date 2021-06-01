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
  int vector[] = {0, 1, 2, 3, 4, 5, 6, 7, 8}, sum = 0, lenghtVector = 8;

  cout << "Average: " << averageVectorValues(vector, lenghtVector) << endl;

  return 0;
}
