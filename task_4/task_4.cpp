/*
4. Вывести на экран все числа, кратные 3, в диапазоне от 0
до 100.
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	int left{ 0 }, right{ 100 };

	while (left <= right)
	{
		if (left % 3 == 0)
		{
			cout << left << ' ';
		}
		left++;
	}
	cout << endl;

	return 0;
}