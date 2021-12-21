#include <iostream>
#include <vector>

using namespace std;

void work()
{	/**
	+ 1. ������� ����� � ������� ��
	+ 2. ��������� ����� 3 ����� � ������� ��
	+ 3. �������� ������ �� ����� 4, ���� �� �� �������
	4. ��������� ������� ����� ����� ������� ������ 4
	*/
	long long int n(0);
	cin >> n;
	vector<long long int> numbers(n, 0);
	for (long long int i(0); i<n; i++)
		cin >> numbers[i];
	for (long long int i(0); i<n; i++)
		for (long long int j(i+1); j<n; j++)
			for (long long int b(j+1); b<n; b++)
                if ((numbers[i] + numbers[j] + numbers[b]) % 4 == 0)
				cout << numbers[i] << " " << numbers[j] << " " << numbers[b] << " " << numbers[i] + numbers[j] + numbers[b] << endl;
}

int main(int argc, char** argv)
{
	work();
	return 0;
}
