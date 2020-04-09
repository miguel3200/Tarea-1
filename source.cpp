#include<iostream>
#include <ctime>
using std::cin;
using std::cout;

int main()
{

	int number = 0;

	cout << "ingresa un numero: ";
	cin >> number;

	for (int i = number; i > 0; i--)
	{


		if (number % i == 0)
		{
			cout << i << "\n";
		}

	}
}

