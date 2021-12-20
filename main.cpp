#include <iostream>
#include <vector>

using namespace std;

void  work()
{
	/**
    + 1) считать и запомнить числа
    + 2) вывести все пары чисел
    + 3) вместо пар вывести произведения
    + 4) проверить делимость произведений
    5) посчиттать и выести коичество подходящих пар
	*/
	int n(0);
	cin >> n;
	vector<int> numbers(n, 0);
	for (int i(0); i<n; i++)
		cin >> numbers[i];
	for (int i(0); i<n; i++)
		for (int j(i+1); j<n; j++)
			if ((numbers[i] * numbers[j]) % 66 == 0)
				cout << numbers[i] * numbers[j] << endl;
}

int main(int argc, char** argv)
{
	work();
	return 0;
}
