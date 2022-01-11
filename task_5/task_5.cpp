/*
5. Написать программу, вычисляющую степень числа.
*/
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	int number{ 1 }, n{ 1 }, nn{ 0 }, product_of_numbers{ 1 };

	cout << "Введите число:" << endl;
	cin >> number;

	cout << "Введите степень числа:" << endl;
	cin >> n;

	nn = n;

	while (n > 0)
	{
		product_of_numbers = product_of_numbers * number;
		n--;
	}
	cout << "\n" << number << " в " << nn << " степени" << " = " << product_of_numbers << endl;

	return 0;
}