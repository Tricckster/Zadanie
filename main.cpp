#include <iostream>
#include <vector>

using namespace std;

void work()
{
    /*
    1. �������, ��������� � ������� �����
    2. ��������� �������� ��� ������� ������� �� 3 ��������� �� 4 � ������� ��, ���� ���������� ����� �����, �� ��������� � otv 1
    3. ������� �������� otv
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
