#include <iostream>
#include <vector>

using namespace std;

void  work()
{
	/**
    + 1) ������� � ��������� �����
    + 2) ������� ��� ���� �����
    3) ������ ��� ������� ������������
    4) ��������� ��������� ������������
    5) ���������� � ������ ��������� ���������� ���
	*/
	int n(0);
	cin >> n;
	vector<int> numbers(n, 0);
	for (int i(0); i<n; i++)
		cin >> numbers[i];
	for (int i(0); i<n; i++)
		for (int j(i+1); j<n; j++)
			cout << numbers[i] << " " << numbers[j] << endl;
	
}

int main(int argc, char** argv)
{
	work();
	return 0;
}
