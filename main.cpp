#include <iostream>
#include <vector>

using namespace std;

void work()
{
    /*
    1. считать, запомнить и вывести числа
    2. посчитать значение при делении каждого из 3 элементов на 4 и сложить их, если получается целое число, то прибавить к otv 1
    3. вывести значение otv
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
