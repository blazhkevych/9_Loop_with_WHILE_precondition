/*
2. Написать программу, выводящую на экран только четные
целые числа из диапазона от 1 до 20.
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	int left{ 1 }, right{ 20 };
	while (left <= 20)
	{
		if (left % 2 == 0)
			cout << left << "\r" << endl;
		left++;
	}

	return 0;
}