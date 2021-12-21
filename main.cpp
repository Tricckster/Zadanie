#include <iostream>
#include <vector>

using namespace std;

void work()
{	/**
	1. считать числа и вывести их
	2. посчитать сумму 3 чисел и вывести их
	3. проврить кратна ли сумма 4, если да то вывести
	4. посчитать сколько таких троек которые кратны 4
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
