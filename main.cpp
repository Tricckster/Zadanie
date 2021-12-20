#include <iostream>
#include <vector>

using namespace std;

void work()
{
	/**
    + 1)считать и сохранить все числа
    + 2) вывести все пары
    + 3) вместо пары вывести суммы
    + 4) проверить делимость суммы
    + 5) вывести только наибольшую сумму
	*/
	int n(0), max(-1);
	cin >> n;
	vector<int> numbers(n, 0);
	for (int i(0); i<n; i++)
		cin >> numbers[i];
	for (int i(0); i<n; i++)
		for (int j(i+1); j<n; j++)
			if ((numbers[i] + numbers[j])%2 != 0 and numbers[i] + numbers[j] > max)
				max = numbers[i] + numbers[j];
	cout << max << endl;
}

int main(int argc, char** argv)
{
	work();
	return 0;
}
