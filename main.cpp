#include <iostream>
#include <vector>

using namespace std;

void work()
{
	/**
    + 1) ������� � ��������� �����
    + 2) ������� ��� ���� �����
    + 3) ������ ��� ������� ������������
    + 4) ��������� ��������� ������������
    5) ���������� � ������ ��������� ���������� ���
	*/	
	int n(0);
	cin >> n;
	vector<int> numbers(n, 0);
	for (int i(0); i<n; i++)
		cin >> numbers[i];
	for (int j(0); j<n; j++)
		for (int i(j+1); i<n; i++)
			if ((numbers[j] * numbers[i])%14 == 0)
				cout << numbers[j] * numbers[i] << endl;
}

int main()
{
	work();
	return 0;
}
