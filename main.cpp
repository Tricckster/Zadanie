#include <iostream>
#include <vector>

using namespace std;

void work()
{
	/**
    + 1)������� � ��������� ��� �����
    + 2) ������� ��� ����
    + 3) ������ ���� ������� �����
    + 4) ��������� ��������� �����
    + 5) ������� ������ ���������� �����
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
