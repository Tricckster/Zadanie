#include <iostream>
#include <vector>

using namespace std;

void work()
{
	/**
    + 1) ������� � ��������� �����
    2) ������� ��� ���� �����
    3) ������ ��� ������� ������������
    4) ��������� ��������� ������������
    5) ���������� � ������ ��������� ���������� ���
	*/	
	int n(0);
	cin >> n;
	vector<int> numbers(n, 0);
	for (int i(0); i<n; i++)
		cin >> numbers[i];
	for (int j(0); j<n; j++)
		for (int i(j+1); i<n; i++)
			cout << numbers[j] << " " << numbers[i] << endl;
}

int main(int argc, char** argv) {
	work();
	return 0;
}
