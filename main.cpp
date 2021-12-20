#include <iostream>
#include <vector>

using namespace std;

void work()
{
	/**
    + 1) считать и запомнить числа
    2) найти наибольшее четное и наибольшее нечетное числа
    3) вывести сумму наибольших чисел
	*/
	int n(0);
	cin >> n;
	vector<int> numbers(n, 0);
	for (int i(0); i<n; i++)
		cin >> numbers[i];
	for (int i(0); i<n; i++)
		cout << numbers[i] << " ";
}

int main(int argc, char** argv) {
	work();
	return 0;
}

