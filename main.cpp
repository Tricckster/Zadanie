#include <iostream>
#include <vector>

using namespace std;

void work()
{
	/**
    + 1) считать и запомнить числа
    + 2) найти наибольшее четное и наибольшее нечетное числа
    + 3) вывести сумму наибольших чисел
	*/
	int n(0), max(-1), max_1(0);
	cin >> n;
	vector<int> numbers(n, 0);
	for (int i(0); i<n; i++)
		cin >> numbers[i];
	for (int i(0); i<n; i++)
		if (numbers[i] > max and numbers[i] %2 != 0)
			max = numbers[i];
		else if (numbers[i] > max_1 and numbers[i] %2 == 0)
			max_1 = numbers[i];
	cout << max + max_1 << endl;
}

int main(int argc, char** argv) {
	work();
	return 0;
}

