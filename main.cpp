#include <iostream>
#include <vector>

using namespace std;

void work()
{	/**
	+ 1. считать числа и вывести их
	+ 2. посчитать сумму 3 чисел и вывести их
	+ 3. проврить кратна ли сумма 4, если да то вывести
	+ 4. посчитать сколько таких троек которые кратны 4
	*/
	long long int n(0), cor(0);
	cin >> n;
	vector<long long int> numbers(n, 0);
	for (long long int i(0); i<n; i++)
		cin >> numbers[i];
	for (long long int i(0); i<n; i++)
		for (long long int j(i+1); j<n; j++)
			for (long long int b(j+1); b<n; b++)
                if ((numbers[i] + numbers[j] + numbers[b]) % 4 == 0)
                    cor++;
    cout << cor << endl;
}

int main(int argc, char** argv)
{
	work();
	return 0;
}
