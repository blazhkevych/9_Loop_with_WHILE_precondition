/*
2. Написать программу, выводящую на экран только четные
целые числа из диапазона от 1 до 20.
*/
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	int number{ 0 };
	while (number)
	{
		number++;
		if (number % 2 == 0 && number > 0 && number < 21)
			cout << number << ' ';
	}

	return 0;
}