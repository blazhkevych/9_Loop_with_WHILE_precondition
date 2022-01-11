/*
3. Вычислить сумму четных чисел и произведение нечетных
в заданном диапазоне.
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	int left{ 1 }, right{ 20 }, sum{ 0 }, odd_product{ 1 };
	while (left <= right)
	{
		if (left % 2 == 0)
		{
			sum = sum + left;
		}

		if (left % 2 != 0)
			odd_product = odd_product * left;
		left++;
	}

	cout << "Сумма четных чисел: " << sum << endl;
	cout << "Произведение нечетных чисел: " << odd_product << endl;

	return 0;
}