#include <iostream>
#include <vector>

using namespace std;

void work()
{
	/**
    + 1)считать и сохранить все числа
    2) вывести все пары
    3) вместо пары вывести суммы
    4) проверить делимость суммы
    5) вывести только наибольшую сумму
	*/
	int n(0);
	cin >> n;
	vector<int> numbers(n, 0);
	for (int i(0); i<n; i++)
		cin >> numbers[i];
	for (int i(0); i<n; i++)
		cout << numbers[i] << " ";
}

int main(int argc, char** argv)
{
	work();
	return 0;
}

