#include<iostream>
#include <ctime>
using std::cin;
using std::cout;

int main()
{
	srand(time(NULL));
	int number = 0;
	int secretnumber = 1 + rand() % 9;

	cout << "ingresa un numero del 1 al 9: ";
	cin >> number;

	if (number < 1 || number > 9)
	{
		cout << "no ingresaste un numero valido";
	}
	else if (number > secretnumber)
	{
		cout << "el numero secreto es mayor";
	}
	else if (number < secretnumber)
	{
		cout << "el numero secreto es menor";
	}
	else if (number == secretnumber)
	{
		cout << "El numero es el mismo... Bye";
	}

}