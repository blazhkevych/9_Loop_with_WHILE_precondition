/*
1. Вывести на экран горизонтальную линию из звёздочек.
Число звездочек указывает пользователь.
*/
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	cout << "Введите количество звездочек: " << endl;
	int number_of_stars{ 0 };
	cin >> number_of_stars;

	while (number_of_stars > 0)
	{
		cout << " * ";
		number_of_stars--;
	}

	return 0;
}