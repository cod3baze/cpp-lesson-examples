#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

	// Tipando variáveis
	int num1 = 1;
	short int num2 = 2;
	long int num3 = 3;
	// -----------------
	double decimal2 = 10.3			 // inteiro
	double decimal = 10.3; // ponto flutuante
	// -----------------
	char caracter = 'x';	 // caractere
	bool flag = true;			 // boleano

	cout << "O valor da variavel num1 eh: " << num1 << endl;
	cout << "O valor da variavel decimal eh: " << decimal << endl;
	cout << "O valor da variavel caracter eh: " << caracter << endl;
	cout << "O valor da variavel flag eh: " << flag << endl;

	// sizeof: tamanho da variavel
	cout << "Memoria da variavel num1 eh: " << sizeof(flag) << " Bytes" << endl;

	return 0;
}
