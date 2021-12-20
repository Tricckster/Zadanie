#include <iostream>

using namespace std;

void work()
{
	/**
    + 1) ������� ����� 
    + 2) �������� ��� � ������ �� ��������� ��������������� ������ ��������������: 
    ������� �� 105
    ������� �� 3 �� �� 5, 7, 15, 21, 35, 105
    ������� �� 5 �� �� 3, 7, 15, 21, 35, 105
    ������� �� 7 �� �� 3, 5, 15, 21, 35, 105
    ������� �� 15 �� �� 3, 5, 7, 21, 35, 105
    ������� �� 21 �� �� 3, 5, 7, 15, 35, 105
    ������� �� 35 �� �� 3, 5, 7, 15, 21, 105
    �� ������� �� �� 3,  �� �� 5,  �� �� 7, �� �� 15, �� �� 21, �� �� 35
    3) �����: n105 * no + n105 * n3 + n105 * n5 + n105 * n7 + n105 * n15 + n105 * n21 + n105 * n35 + n105 * (n105 - 1) / 2 + n3 * n35 + n5 * n21 + n7 * n15
	*/
	long long int n(0), cur(0);
	long long int n105(0), n3(0), n5(0), n7(0), n15(0), n21(0), n35(0), no(0);
	cin >> n;
	for (int i(0); i<n; i++)
	{
		cin >> cur;
		if (cur % 105 == 0)
			n105++;
		else if (cur % 3 == 0)
			n3++;
		else if (cur % 5 == 0)
			n5++;
		else if (cur % 7 == 0)
			n7++;
		else if (cur % 15 == 0)
			n15++;
		else if (cur % 21 == 0)
			n21++;
		else if (cur % 35 == 0)
			n35++;
	}
	no = n - n105 - n3 - n7 - n5 - n15 - n21 - n35;
	cout << n105 << " " << n3 << " " << n5 << " " << n7 << " " << n15 << " " << n21 << " " << n35 << " " << no << " " << endl;
}

int main(int argc, char** argv)
{
	work();
	return 0;
}
